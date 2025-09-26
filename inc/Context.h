//
// Created by guilh on 26/09/2025.
//

#ifndef TD1_INTRODUCTION_C___EX1_CONTEXT_H
#define TD1_INTRODUCTION_C___EX1_CONTEXT_H


using namespace std;

class Context{
private:
    State _state = null;

public Context(State state)
{
    this.MoveTo(state);
}

public void MoveTo(State state)
{
    Console.WriteLine($"Context: Move to {state.GetType().Name}");
    this._state = state;
    this._state.SetContext(this);
}

public void Request()
{
    this._state.DoSomething(this);
}
}


#endif //TD1_INTRODUCTION_C___EX1_CONTEXT_H