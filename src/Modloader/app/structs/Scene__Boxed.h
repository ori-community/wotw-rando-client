#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Scene__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Scene__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scene__Boxed_DEFINED)
#include <Modloader/app/structs/Scene.h>
#if defined(IL2CPP_STRUCT_Scene_DEFINED)
#define IL2CPP_STRUCT_Scene__Boxed_DEFINED
struct Scene__Class;
struct Scene__Boxed {
    struct Scene__Class* klass;
    MonitorData* monitor;
    struct Scene fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Scene__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Scene__Boxed_FWDDECL
#include <Modloader/app/structs/Scene__Class.h>
#endif
#undef IL2CPP_STRUCT_Scene__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scene__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Scene__Boxed_FWDDECL)
#include <Modloader/app/structs/Scene__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Scene__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
