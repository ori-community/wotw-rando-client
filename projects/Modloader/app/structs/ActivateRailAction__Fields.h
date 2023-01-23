#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateRailAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateRailAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateRailAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateRailAction__Fields_DEFINED
struct GameObject;
struct ActivateRailAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject* Rail;
    bool Active;
    bool ApplyToHierarchy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateRailAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivateRailAction__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_ActivateRailAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateRailAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivateRailAction__Fields_FWDDECL)
#include <Modloader/app/structs/ActivateRailAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateRailAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
