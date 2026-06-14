#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberDescriptor_DEFINED)
#include <Modloader/app/structs/MemberDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_MemberDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberDescriptor_DEFINED
struct MemberDescriptor__Class;
struct MemberDescriptor {
    struct MemberDescriptor__Class* klass;
    MonitorData* monitor;
    struct MemberDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberDescriptor_FWDDECL)
#define IL2CPP_STRUCT_MemberDescriptor_FWDDECL
#include <Modloader/app/structs/MemberDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_MemberDescriptor_FWDDECL)
#include <Modloader/app/structs/MemberDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
