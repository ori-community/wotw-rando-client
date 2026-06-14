#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugHornEntity_HornSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugHornEntity_HornSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugHornEntity_HornSettings_DEFINED)
#define IL2CPP_STRUCT_BugHornEntity_HornSettings_DEFINED
struct GameObject;
struct BugHornEntity_HornSettings {
    struct GameObject* hornModel;
    struct GameObject* hornDamageReceiversParent;
};
#endif
#if !defined(IL2CPP_STRUCT_BugHornEntity_HornSettings_FWDDECL)
#define IL2CPP_STRUCT_BugHornEntity_HornSettings_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_BugHornEntity_HornSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugHornEntity_HornSettings_DEFINED) && !defined(IL2CPP_STRUCT_BugHornEntity_HornSettings_FWDDECL)
#include <Modloader/app/structs/BugHornEntity_HornSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugHornEntity_HornSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
