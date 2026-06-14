#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VFXSpawnerCallbacks_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VFXSpawnerCallbacks_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXSpawnerCallbacks_DEFINED)
#include <Modloader/app/structs/VFXSpawnerCallbacks__Fields.h>
#if defined(IL2CPP_STRUCT_VFXSpawnerCallbacks__Fields_DEFINED)
#define IL2CPP_STRUCT_VFXSpawnerCallbacks_DEFINED
struct VFXSpawnerCallbacks__Class;
struct VFXSpawnerCallbacks {
    struct VFXSpawnerCallbacks__Class* klass;
    MonitorData* monitor;
    struct VFXSpawnerCallbacks__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VFXSpawnerCallbacks_FWDDECL)
#define IL2CPP_STRUCT_VFXSpawnerCallbacks_FWDDECL
#include <Modloader/app/structs/VFXSpawnerCallbacks__Class.h>
#endif
#undef IL2CPP_STRUCT_VFXSpawnerCallbacks_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXSpawnerCallbacks_DEFINED) && !defined(IL2CPP_STRUCT_VFXSpawnerCallbacks_FWDDECL)
#include <Modloader/app/structs/VFXSpawnerCallbacks.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VFXSpawnerCallbacks.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
