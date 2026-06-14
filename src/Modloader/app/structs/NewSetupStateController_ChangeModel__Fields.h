#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_DEFINED)
#define IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_DEFINED
struct IUberState;
struct __declspec(align(8)) NewSetupStateController_ChangeModel__Fields {
    int32_t m_stateCount;
    int32_t m_modifierCount;
    struct IUberState* m_uberState;
};
#endif
#if !defined(IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_FWDDECL
#include <Modloader/app/structs/IUberState.h>
#endif
#undef IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewSetupStateController_ChangeModel__Fields_FWDDECL)
#include <Modloader/app/structs/NewSetupStateController_ChangeModel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewSetupStateController_ChangeModel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
