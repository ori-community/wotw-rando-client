#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cheat__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cheat__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cheat__Fields_DEFINED)
#define IL2CPP_STRUCT_Cheat__Fields_DEFINED
struct Input_InputButtonProcessor__Array;
struct Action;
struct Func_1_Boolean_;
struct __declspec(align(8)) Cheat__Fields {
    struct Input_InputButtonProcessor__Array* m_combination;
    struct Action* m_action;
    struct Func_1_Boolean_* m_condition;
    int32_t m_currentCombinationIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_Cheat__Fields_FWDDECL)
#define IL2CPP_STRUCT_Cheat__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/Input_InputButtonProcessor__Array.h>
#endif
#undef IL2CPP_STRUCT_Cheat__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cheat__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Cheat__Fields_FWDDECL)
#include <Modloader/app/structs/Cheat__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cheat__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
