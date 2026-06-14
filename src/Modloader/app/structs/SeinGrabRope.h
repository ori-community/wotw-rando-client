#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabRope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabRope_DEFINED)
#include <Modloader/app/structs/SeinGrabRope__Fields.h>
#if defined(IL2CPP_STRUCT_SeinGrabRope__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrabRope_DEFINED
struct SeinGrabRope__Class;
struct SeinGrabRope {
    struct SeinGrabRope__Class* klass;
    MonitorData* monitor;
    struct SeinGrabRope__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabRope_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabRope_FWDDECL
#include <Modloader/app/structs/SeinGrabRope__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabRope_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabRope_FWDDECL)
#include <Modloader/app/structs/SeinGrabRope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabRope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
