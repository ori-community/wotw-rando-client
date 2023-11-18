#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoThrowGetBinderMember_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoThrowGetBinderMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoThrowGetBinderMember_DEFINED)
#include <Modloader/app/structs/NoThrowGetBinderMember__Fields.h>
#if defined(IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_DEFINED)
#define IL2CPP_STRUCT_NoThrowGetBinderMember_DEFINED
struct NoThrowGetBinderMember__Class;
struct NoThrowGetBinderMember {
    struct NoThrowGetBinderMember__Class* klass;
    MonitorData* monitor;
    struct NoThrowGetBinderMember__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoThrowGetBinderMember_FWDDECL)
#define IL2CPP_STRUCT_NoThrowGetBinderMember_FWDDECL
#include <Modloader/app/structs/NoThrowGetBinderMember__Class.h>
#endif
#undef IL2CPP_STRUCT_NoThrowGetBinderMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoThrowGetBinderMember_DEFINED) && !defined(IL2CPP_STRUCT_NoThrowGetBinderMember_FWDDECL)
#include <Modloader/app/structs/NoThrowGetBinderMember.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoThrowGetBinderMember.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
