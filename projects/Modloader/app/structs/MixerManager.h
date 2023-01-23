#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerManager_DEFINED)
#include <Modloader/app/structs/MixerManager__Fields.h>
#if defined(IL2CPP_STRUCT_MixerManager__Fields_DEFINED)
#define IL2CPP_STRUCT_MixerManager_DEFINED
struct MixerManager__Class;
struct MixerManager {
    struct MixerManager__Class* klass;
    MonitorData* monitor;
    struct MixerManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MixerManager_FWDDECL)
#define IL2CPP_STRUCT_MixerManager_FWDDECL
#include <Modloader/app/structs/MixerManager__Class.h>
#endif
#undef IL2CPP_STRUCT_MixerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerManager_DEFINED) && !defined(IL2CPP_STRUCT_MixerManager_FWDDECL)
#include <Modloader/app/structs/MixerManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
