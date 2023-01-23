#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseGameObjectSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseGameObjectSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseGameObjectSystem_DEFINED)
#include <Modloader/app/structs/WwiseGameObjectSystem__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseGameObjectSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseGameObjectSystem_DEFINED
struct WwiseGameObjectSystem__Class;
struct WwiseGameObjectSystem {
    struct WwiseGameObjectSystem__Class* klass;
    MonitorData* monitor;
    struct WwiseGameObjectSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseGameObjectSystem_FWDDECL)
#define IL2CPP_STRUCT_WwiseGameObjectSystem_FWDDECL
#include <Modloader/app/structs/WwiseGameObjectSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseGameObjectSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseGameObjectSystem_DEFINED) && !defined(IL2CPP_STRUCT_WwiseGameObjectSystem_FWDDECL)
#include <Modloader/app/structs/WwiseGameObjectSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseGameObjectSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
