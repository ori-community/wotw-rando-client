#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCSettings_DEFINED)
#include <Modloader/app/structs/NPCSettings__Fields.h>
#if defined(IL2CPP_STRUCT_NPCSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCSettings_DEFINED
struct NPCSettings__Class;
struct NPCSettings {
    struct NPCSettings__Class* klass;
    MonitorData* monitor;
    struct NPCSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCSettings_FWDDECL)
#define IL2CPP_STRUCT_NPCSettings_FWDDECL
#include <Modloader/app/structs/NPCSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCSettings_DEFINED) && !defined(IL2CPP_STRUCT_NPCSettings_FWDDECL)
#include <Modloader/app/structs/NPCSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
