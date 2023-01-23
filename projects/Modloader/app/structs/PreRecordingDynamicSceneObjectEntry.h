#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_DEFINED)
#define IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_DEFINED
struct IRecordable;
struct PreRecordingDynamicSceneObjectEntry {
    struct IRecordable* Object;
};
#endif
#if !defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_FWDDECL)
#define IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_FWDDECL
#include <Modloader/app/structs/IRecordable.h>
#endif
#undef IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_DEFINED) && !defined(IL2CPP_STRUCT_PreRecordingDynamicSceneObjectEntry_FWDDECL)
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
