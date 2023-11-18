#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_DEFINED)
#include <Modloader/app/structs/GetMemberBinder__Fields.h>
#if defined(IL2CPP_STRUCT_GetMemberBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_DEFINED
struct GetMemberBinder;
struct NoThrowGetBinderMember__Fields {
    struct GetMemberBinder__Fields _;
    struct GetMemberBinder* _innerBinder;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_FWDDECL)
#define IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_FWDDECL
#include <Modloader/app/structs/GetMemberBinder.h>
#endif
#undef IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NoThrowGetBinderMember__Fields_FWDDECL)
#include <Modloader/app/structs/NoThrowGetBinderMember__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoThrowGetBinderMember__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
