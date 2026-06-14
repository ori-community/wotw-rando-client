#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRejectable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRejectable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRejectable_DEFINED)
#define IL2CPP_STRUCT_IRejectable_DEFINED
struct IRejectable__Class;
struct IRejectable {
    struct IRejectable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRejectable_FWDDECL)
#define IL2CPP_STRUCT_IRejectable_FWDDECL
#include <Modloader/app/structs/IRejectable__Class.h>
#endif
#undef IL2CPP_STRUCT_IRejectable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRejectable_DEFINED) && !defined(IL2CPP_STRUCT_IRejectable_FWDDECL)
#include <Modloader/app/structs/IRejectable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRejectable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
