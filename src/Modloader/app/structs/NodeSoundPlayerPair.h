#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NodeSoundPlayerPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NodeSoundPlayerPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeSoundPlayerPair_DEFINED)
#include <Modloader/app/structs/NodeSoundPlayerPair__Fields.h>
#if defined(IL2CPP_STRUCT_NodeSoundPlayerPair__Fields_DEFINED)
#define IL2CPP_STRUCT_NodeSoundPlayerPair_DEFINED
struct NodeSoundPlayerPair__Class;
struct NodeSoundPlayerPair {
    struct NodeSoundPlayerPair__Class* klass;
    MonitorData* monitor;
    struct NodeSoundPlayerPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NodeSoundPlayerPair_FWDDECL)
#define IL2CPP_STRUCT_NodeSoundPlayerPair_FWDDECL
#include <Modloader/app/structs/NodeSoundPlayerPair__Class.h>
#endif
#undef IL2CPP_STRUCT_NodeSoundPlayerPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeSoundPlayerPair_DEFINED) && !defined(IL2CPP_STRUCT_NodeSoundPlayerPair_FWDDECL)
#include <Modloader/app/structs/NodeSoundPlayerPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NodeSoundPlayerPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
