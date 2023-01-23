#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DetachFromRope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DetachFromRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_DetachFromRope_DEFINED)
#include <Modloader/app/structs/DetachFromRope__Fields.h>
#if defined(IL2CPP_STRUCT_DetachFromRope__Fields_DEFINED)
#define IL2CPP_STRUCT_DetachFromRope_DEFINED
struct DetachFromRope__Class;
struct DetachFromRope {
    struct DetachFromRope__Class* klass;
    MonitorData* monitor;
    struct DetachFromRope__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DetachFromRope_FWDDECL)
#define IL2CPP_STRUCT_DetachFromRope_FWDDECL
#include <Modloader/app/structs/DetachFromRope__Class.h>
#endif
#undef IL2CPP_STRUCT_DetachFromRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_DetachFromRope_DEFINED) && !defined(IL2CPP_STRUCT_DetachFromRope_FWDDECL)
#include <Modloader/app/structs/DetachFromRope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DetachFromRope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
