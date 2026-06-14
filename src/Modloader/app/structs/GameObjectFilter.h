#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectFilter_DEFINED)
#include <Modloader/app/structs/GameObjectFilter__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_GameObjectFilter_DEFINED
struct GameObjectFilter__Class;
struct GameObjectFilter {
    struct GameObjectFilter__Class* klass;
    MonitorData* monitor;
    struct GameObjectFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectFilter_FWDDECL)
#define IL2CPP_STRUCT_GameObjectFilter_FWDDECL
#include <Modloader/app/structs/GameObjectFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObjectFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectFilter_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectFilter_FWDDECL)
#include <Modloader/app/structs/GameObjectFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
