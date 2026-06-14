#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupInvitation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupInvitation_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupInvitation_DEFINED)
#include <Modloader/app/structs/GroupInvitation__Fields.h>
#if defined(IL2CPP_STRUCT_GroupInvitation__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupInvitation_DEFINED
struct GroupInvitation__Class;
struct GroupInvitation {
    struct GroupInvitation__Class* klass;
    MonitorData* monitor;
    struct GroupInvitation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroupInvitation_FWDDECL)
#define IL2CPP_STRUCT_GroupInvitation_FWDDECL
#include <Modloader/app/structs/GroupInvitation__Class.h>
#endif
#undef IL2CPP_STRUCT_GroupInvitation_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupInvitation_DEFINED) && !defined(IL2CPP_STRUCT_GroupInvitation_FWDDECL)
#include <Modloader/app/structs/GroupInvitation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupInvitation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
