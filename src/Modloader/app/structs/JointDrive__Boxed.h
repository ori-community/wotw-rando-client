#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JointDrive__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JointDrive__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointDrive__Boxed_DEFINED)
#include <Modloader/app/structs/JointDrive.h>
#if defined(IL2CPP_STRUCT_JointDrive_DEFINED)
#define IL2CPP_STRUCT_JointDrive__Boxed_DEFINED
struct JointDrive__Class;
struct JointDrive__Boxed {
    struct JointDrive__Class* klass;
    MonitorData* monitor;
    struct JointDrive fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JointDrive__Boxed_FWDDECL)
#define IL2CPP_STRUCT_JointDrive__Boxed_FWDDECL
#include <Modloader/app/structs/JointDrive__Class.h>
#endif
#undef IL2CPP_STRUCT_JointDrive__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JointDrive__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_JointDrive__Boxed_FWDDECL)
#include <Modloader/app/structs/JointDrive__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JointDrive__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
