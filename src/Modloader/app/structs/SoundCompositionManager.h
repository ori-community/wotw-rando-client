#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionManager_DEFINED)
#include <Modloader/app/structs/SoundCompositionManager__Fields.h>
#if defined(IL2CPP_STRUCT_SoundCompositionManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionManager_DEFINED
struct SoundCompositionManager__Class;
struct SoundCompositionManager {
    struct SoundCompositionManager__Class* klass;
    MonitorData* monitor;
    struct SoundCompositionManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionManager_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionManager_FWDDECL
#include <Modloader/app/structs/SoundCompositionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionManager_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionManager_FWDDECL)
#include <Modloader/app/structs/SoundCompositionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
