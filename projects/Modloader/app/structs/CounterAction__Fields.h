#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CounterAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CounterAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CounterAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/CounterAction_OperationType__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_CounterAction_OperationType__Enum_DEFINED)
#define IL2CPP_STRUCT_CounterAction__Fields_DEFINED
struct NumberCounter;
struct CounterAction__Fields {
    struct ActionMethod__Fields _;
    struct NumberCounter* Counter;
    CounterAction_OperationType__Enum Operation;

    int32_t Value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CounterAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_CounterAction__Fields_FWDDECL
#include <Modloader/app/structs/NumberCounter.h>
#endif
#undef IL2CPP_STRUCT_CounterAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CounterAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CounterAction__Fields_FWDDECL)
#include <Modloader/app/structs/CounterAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CounterAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
