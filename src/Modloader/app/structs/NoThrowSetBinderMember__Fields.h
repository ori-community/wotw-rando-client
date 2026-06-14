#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_DEFINED)
#include <Modloader/app/structs/SetMemberBinder__Fields.h>
#if defined(IL2CPP_STRUCT_SetMemberBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_DEFINED
struct SetMemberBinder;
struct NoThrowSetBinderMember__Fields {
    struct SetMemberBinder__Fields _;
    struct SetMemberBinder* _innerBinder;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_FWDDECL)
#define IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_FWDDECL
#include <Modloader/app/structs/SetMemberBinder.h>
#endif
#undef IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NoThrowSetBinderMember__Fields_FWDDECL)
#include <Modloader/app/structs/NoThrowSetBinderMember__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoThrowSetBinderMember__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
