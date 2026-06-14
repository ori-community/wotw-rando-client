#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrabbableRope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrabbableRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableRope_DEFINED)
#include <Modloader/app/structs/GrabbableRope__Fields.h>
#if defined(IL2CPP_STRUCT_GrabbableRope__Fields_DEFINED)
#define IL2CPP_STRUCT_GrabbableRope_DEFINED
struct GrabbableRope__Class;
struct GrabbableRope {
    struct GrabbableRope__Class* klass;
    MonitorData* monitor;
    struct GrabbableRope__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrabbableRope_FWDDECL)
#define IL2CPP_STRUCT_GrabbableRope_FWDDECL
#include <Modloader/app/structs/GrabbableRope__Class.h>
#endif
#undef IL2CPP_STRUCT_GrabbableRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrabbableRope_DEFINED) && !defined(IL2CPP_STRUCT_GrabbableRope_FWDDECL)
#include <Modloader/app/structs/GrabbableRope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrabbableRope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
