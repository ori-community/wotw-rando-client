#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberMemberBinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberMemberBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberMemberBinding_DEFINED)
#include <Modloader/app/structs/MemberMemberBinding__Fields.h>
#if defined(IL2CPP_STRUCT_MemberMemberBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberMemberBinding_DEFINED
struct MemberMemberBinding__Class;
struct MemberMemberBinding {
    struct MemberMemberBinding__Class* klass;
    MonitorData* monitor;
    struct MemberMemberBinding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberMemberBinding_FWDDECL)
#define IL2CPP_STRUCT_MemberMemberBinding_FWDDECL
#include <Modloader/app/structs/MemberMemberBinding__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberMemberBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberMemberBinding_DEFINED) && !defined(IL2CPP_STRUCT_MemberMemberBinding_FWDDECL)
#include <Modloader/app/structs/MemberMemberBinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberMemberBinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
