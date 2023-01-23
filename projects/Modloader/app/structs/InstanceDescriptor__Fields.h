#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstanceDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstanceDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_InstanceDescriptor__Fields_DEFINED
struct MemberInfo_1;
struct ICollection;
struct __declspec(align(8)) InstanceDescriptor__Fields {
    struct MemberInfo_1* member;
    struct ICollection* arguments;
    bool isComplete;
};
#endif
#if !defined(IL2CPP_STRUCT_InstanceDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_InstanceDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#endif
#undef IL2CPP_STRUCT_InstanceDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InstanceDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/InstanceDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstanceDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
