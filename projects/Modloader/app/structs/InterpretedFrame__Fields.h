#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterpretedFrame__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterpretedFrame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpretedFrame__Fields_DEFINED)
#define IL2CPP_STRUCT_InterpretedFrame__Fields_DEFINED
struct Interpreter;
struct InterpretedFrame;
struct Int32__Array;
struct Object;
struct Object__Array;
struct IStrongBox__Array;
struct __declspec(align(8)) InterpretedFrame__Fields {
    struct Interpreter* Interpreter;
    struct InterpretedFrame* _parent;
    struct Int32__Array* _continuations;
    int32_t _continuationIndex;
    int32_t _pendingContinuation;
    struct Object* _pendingValue;
    struct Object__Array* Data;
    struct IStrongBox__Array* Closure;
    int32_t StackIndex;
    int32_t InstructionIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_InterpretedFrame__Fields_FWDDECL)
#define IL2CPP_STRUCT_InterpretedFrame__Fields_FWDDECL
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Interpreter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_InterpretedFrame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpretedFrame__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InterpretedFrame__Fields_FWDDECL)
#include <Modloader/app/structs/InterpretedFrame__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterpretedFrame__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
