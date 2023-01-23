#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreRecordingInstantiationEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreRecordingInstantiationEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingInstantiationEntry_DEFINED)
#define IL2CPP_STRUCT_PreRecordingInstantiationEntry_DEFINED
struct GameObject;
struct PreRecordingInstantiationEntry {
    struct GameObject* Instance;
    struct GameObject* Prefab;
};
#endif
#if !defined(IL2CPP_STRUCT_PreRecordingInstantiationEntry_FWDDECL)
#define IL2CPP_STRUCT_PreRecordingInstantiationEntry_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_PreRecordingInstantiationEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingInstantiationEntry_DEFINED) && !defined(IL2CPP_STRUCT_PreRecordingInstantiationEntry_FWDDECL)
#include <Modloader/app/structs/PreRecordingInstantiationEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreRecordingInstantiationEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
