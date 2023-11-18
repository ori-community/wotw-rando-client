#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VisibleLight__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VisibleLight__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleLight__Boxed_DEFINED)
#include <Modloader/app/structs/VisibleLight.h>
#if defined(IL2CPP_STRUCT_VisibleLight_DEFINED)
#define IL2CPP_STRUCT_VisibleLight__Boxed_DEFINED
struct VisibleLight__Class;
struct VisibleLight__Boxed {
    struct VisibleLight__Class* klass;
    MonitorData* monitor;
    struct VisibleLight fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VisibleLight__Boxed_FWDDECL)
#define IL2CPP_STRUCT_VisibleLight__Boxed_FWDDECL
#include <Modloader/app/structs/VisibleLight__Class.h>
#endif
#undef IL2CPP_STRUCT_VisibleLight__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleLight__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_VisibleLight__Boxed_FWDDECL)
#include <Modloader/app/structs/VisibleLight__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VisibleLight__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
