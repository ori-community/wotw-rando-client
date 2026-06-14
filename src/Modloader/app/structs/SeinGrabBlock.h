#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabBlock_DEFINED)
#include <Modloader/app/structs/SeinGrabBlock__Fields.h>
#if defined(IL2CPP_STRUCT_SeinGrabBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrabBlock_DEFINED
struct SeinGrabBlock__Class;
struct SeinGrabBlock {
    struct SeinGrabBlock__Class* klass;
    MonitorData* monitor;
    struct SeinGrabBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabBlock_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabBlock_FWDDECL
#include <Modloader/app/structs/SeinGrabBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabBlock_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabBlock_FWDDECL)
#include <Modloader/app/structs/SeinGrabBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
