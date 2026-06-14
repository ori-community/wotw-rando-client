#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGrabbableRope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGrabbableRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGrabbableRope_DEFINED)
#define IL2CPP_STRUCT_IGrabbableRope_DEFINED
struct IGrabbableRope__Class;
struct IGrabbableRope {
    struct IGrabbableRope__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGrabbableRope_FWDDECL)
#define IL2CPP_STRUCT_IGrabbableRope_FWDDECL
#include <Modloader/app/structs/IGrabbableRope__Class.h>
#endif
#undef IL2CPP_STRUCT_IGrabbableRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGrabbableRope_DEFINED) && !defined(IL2CPP_STRUCT_IGrabbableRope_FWDDECL)
#include <Modloader/app/structs/IGrabbableRope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGrabbableRope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
