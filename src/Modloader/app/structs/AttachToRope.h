#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachToRope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachToRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToRope_DEFINED)
#include <Modloader/app/structs/AttachToRope__Fields.h>
#if defined(IL2CPP_STRUCT_AttachToRope__Fields_DEFINED)
#define IL2CPP_STRUCT_AttachToRope_DEFINED
struct AttachToRope__Class;
struct AttachToRope {
    struct AttachToRope__Class* klass;
    MonitorData* monitor;
    struct AttachToRope__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachToRope_FWDDECL)
#define IL2CPP_STRUCT_AttachToRope_FWDDECL
#include <Modloader/app/structs/AttachToRope__Class.h>
#endif
#undef IL2CPP_STRUCT_AttachToRope_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToRope_DEFINED) && !defined(IL2CPP_STRUCT_AttachToRope_FWDDECL)
#include <Modloader/app/structs/AttachToRope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachToRope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
