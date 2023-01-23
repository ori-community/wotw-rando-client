#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupControllerStateHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupControllerStateHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder__Fields_DEFINED)
#include <Modloader/app/structs/SetupControllerStateHolder_StateControllerMode__Enum.h>
#include <Modloader/app/structs/StateHolder_1_SetupStateModifier___Fields.h>
#if defined(IL2CPP_STRUCT_StateHolder_1_SetupStateModifier___Fields_DEFINED) && defined(IL2CPP_STRUCT_SetupControllerStateHolder_StateControllerMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SetupControllerStateHolder__Fields_DEFINED
struct List_1_SetupState_;
struct List_1_SetupStateModifier_;
struct Dictionary_2_System_Int32_SetupStateModifier_;
struct SetupControllerStateHolder__Fields {
    struct StateHolder_1_SetupStateModifier___Fields _;
    SetupControllerStateHolder_StateControllerMode__Enum Mode;

    struct List_1_SetupState_* States;
    struct List_1_SetupStateModifier_* Modifiers;
    int32_t FallbackPassiveState;
    struct Dictionary_2_System_Int32_SetupStateModifier_* m_guidToModifier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetupControllerStateHolder__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_SetupStateModifier_.h>
#include <Modloader/app/structs/List_1_SetupStateModifier_.h>
#include <Modloader/app/structs/List_1_SetupState_.h>
#endif
#undef IL2CPP_STRUCT_SetupControllerStateHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetupControllerStateHolder__Fields_FWDDECL)
#include <Modloader/app/structs/SetupControllerStateHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupControllerStateHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
