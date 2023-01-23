#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinStatusAnimatorDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinStatusAnimatorDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver_DEFINED)
#include <Modloader/app/structs/SeinStatusAnimatorDriver__Fields.h>
#if defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinStatusAnimatorDriver_DEFINED
struct SeinStatusAnimatorDriver__Class;
struct SeinStatusAnimatorDriver {
    struct SeinStatusAnimatorDriver__Class* klass;
    MonitorData* monitor;
    struct SeinStatusAnimatorDriver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver_FWDDECL)
#define IL2CPP_STRUCT_SeinStatusAnimatorDriver_FWDDECL
#include <Modloader/app/structs/SeinStatusAnimatorDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinStatusAnimatorDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver_DEFINED) && !defined(IL2CPP_STRUCT_SeinStatusAnimatorDriver_FWDDECL)
#include <Modloader/app/structs/SeinStatusAnimatorDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinStatusAnimatorDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
