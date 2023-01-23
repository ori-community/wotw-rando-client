#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoThrowSetBinderMember_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoThrowSetBinderMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoThrowSetBinderMember_DEFINED)
#include <Modloader/app/structs/NoThrowSetBinderMember__Fields.h>
#if defined(IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_DEFINED)
#define IL2CPP_STRUCT_NoThrowSetBinderMember_DEFINED
struct NoThrowSetBinderMember__Class;
struct NoThrowSetBinderMember {
    struct NoThrowSetBinderMember__Class* klass;
    MonitorData* monitor;
    struct NoThrowSetBinderMember__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoThrowSetBinderMember_FWDDECL)
#define IL2CPP_STRUCT_NoThrowSetBinderMember_FWDDECL
#include <Modloader/app/structs/NoThrowSetBinderMember__Class.h>
#endif
#undef IL2CPP_STRUCT_NoThrowSetBinderMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoThrowSetBinderMember_DEFINED) && !defined(IL2CPP_STRUCT_NoThrowSetBinderMember_FWDDECL)
#include <Modloader/app/structs/NoThrowSetBinderMember.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoThrowSetBinderMember.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
