#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoftJointLimit__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoftJointLimit__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftJointLimit__Boxed_DEFINED)
#include <Modloader/app/structs/SoftJointLimit.h>
#if defined(IL2CPP_STRUCT_SoftJointLimit_DEFINED)
#define IL2CPP_STRUCT_SoftJointLimit__Boxed_DEFINED
struct SoftJointLimit__Class;
struct SoftJointLimit__Boxed {
    struct SoftJointLimit__Class* klass;
    MonitorData* monitor;
    struct SoftJointLimit fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoftJointLimit__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SoftJointLimit__Boxed_FWDDECL
#include <Modloader/app/structs/SoftJointLimit__Class.h>
#endif
#undef IL2CPP_STRUCT_SoftJointLimit__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftJointLimit__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SoftJointLimit__Boxed_FWDDECL)
#include <Modloader/app/structs/SoftJointLimit__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoftJointLimit__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
