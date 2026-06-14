#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_DEFINED
struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings;
struct GameObject;
struct BatSwarm;
struct BatSwarmPlaceholder__Fields {
    struct SaveSerialize__Fields _;
    struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings* Settings;
    struct GameObject* BatSwarm;
    struct BatSwarm* m_currentSwarm;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/BatSwarm.h>
#include <Modloader/app/structs/BatSwarmPlaceholder_BatSwarmPlaceholderSettings.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BatSwarmPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/BatSwarmPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatSwarmPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
