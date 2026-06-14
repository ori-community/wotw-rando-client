#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VFXSpawnerState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VFXSpawnerState_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXSpawnerState_DEFINED)
#include <Modloader/app/structs/VFXSpawnerState__Fields.h>
#if defined(IL2CPP_STRUCT_VFXSpawnerState__Fields_DEFINED)
#define IL2CPP_STRUCT_VFXSpawnerState_DEFINED
struct VFXSpawnerState__Class;
struct VFXSpawnerState {
    struct VFXSpawnerState__Class* klass;
    MonitorData* monitor;
    struct VFXSpawnerState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VFXSpawnerState_FWDDECL)
#define IL2CPP_STRUCT_VFXSpawnerState_FWDDECL
#include <Modloader/app/structs/VFXSpawnerState__Class.h>
#endif
#undef IL2CPP_STRUCT_VFXSpawnerState_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXSpawnerState_DEFINED) && !defined(IL2CPP_STRUCT_VFXSpawnerState_FWDDECL)
#include <Modloader/app/structs/VFXSpawnerState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VFXSpawnerState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
