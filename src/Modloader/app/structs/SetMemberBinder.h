#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetMemberBinder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetMemberBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMemberBinder_DEFINED)
#include <Modloader/app/structs/SetMemberBinder__Fields.h>
#if defined(IL2CPP_STRUCT_SetMemberBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_SetMemberBinder_DEFINED
struct SetMemberBinder__Class;
struct SetMemberBinder {
    struct SetMemberBinder__Class* klass;
    MonitorData* monitor;
    struct SetMemberBinder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetMemberBinder_FWDDECL)
#define IL2CPP_STRUCT_SetMemberBinder_FWDDECL
#include <Modloader/app/structs/SetMemberBinder__Class.h>
#endif
#undef IL2CPP_STRUCT_SetMemberBinder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMemberBinder_DEFINED) && !defined(IL2CPP_STRUCT_SetMemberBinder_FWDDECL)
#include <Modloader/app/structs/SetMemberBinder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetMemberBinder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
