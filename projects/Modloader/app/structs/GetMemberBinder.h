#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMemberBinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMemberBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMemberBinder_DEFINED)
#include <Modloader/app/structs/GetMemberBinder__Fields.h>
#if defined(IL2CPP_STRUCT_GetMemberBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_GetMemberBinder_DEFINED
struct GetMemberBinder__Class;
struct GetMemberBinder {
    struct GetMemberBinder__Class* klass;
    MonitorData* monitor;
    struct GetMemberBinder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMemberBinder_FWDDECL)
#define IL2CPP_STRUCT_GetMemberBinder_FWDDECL
#include <Modloader/app/structs/GetMemberBinder__Class.h>
#endif
#undef IL2CPP_STRUCT_GetMemberBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMemberBinder_DEFINED) && !defined(IL2CPP_STRUCT_GetMemberBinder_FWDDECL)
#include <Modloader/app/structs/GetMemberBinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMemberBinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
