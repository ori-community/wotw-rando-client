#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupRole_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupRole_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRole_DEFINED)
#include <Modloader/app/structs/GroupRole__Fields.h>
#if defined(IL2CPP_STRUCT_GroupRole__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupRole_DEFINED
struct GroupRole__Class;
struct GroupRole {
    struct GroupRole__Class* klass;
    MonitorData* monitor;
    struct GroupRole__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupRole_FWDDECL)
#define IL2CPP_STRUCT_GroupRole_FWDDECL
#include <Modloader/app/structs/GroupRole__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupRole_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRole_DEFINED) && !defined(IL2CPP_STRUCT_GroupRole_FWDDECL)
#include <Modloader/app/structs/GroupRole.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupRole.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
