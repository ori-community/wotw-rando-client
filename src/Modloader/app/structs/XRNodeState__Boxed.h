#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRNodeState__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRNodeState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRNodeState__Boxed_DEFINED)
#include <Modloader/app/structs/XRNodeState.h>
#if defined(IL2CPP_STRUCT_XRNodeState_DEFINED)
#define IL2CPP_STRUCT_XRNodeState__Boxed_DEFINED
struct XRNodeState__Class;
struct XRNodeState__Boxed {
    struct XRNodeState__Class* klass;
    MonitorData* monitor;
    struct XRNodeState fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRNodeState__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XRNodeState__Boxed_FWDDECL
#include <Modloader/app/structs/XRNodeState__Class.h>
#endif
#undef IL2CPP_STRUCT_XRNodeState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRNodeState__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XRNodeState__Boxed_FWDDECL)
#include <Modloader/app/structs/XRNodeState__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRNodeState__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
