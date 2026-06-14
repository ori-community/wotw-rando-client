#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachToRopeAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachToRopeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToRopeAction_DEFINED)
#include <Modloader/app/structs/AttachToRopeAction__Fields.h>
#if defined(IL2CPP_STRUCT_AttachToRopeAction__Fields_DEFINED)
#define IL2CPP_STRUCT_AttachToRopeAction_DEFINED
struct AttachToRopeAction__Class;
struct AttachToRopeAction {
    struct AttachToRopeAction__Class* klass;
    MonitorData* monitor;
    struct AttachToRopeAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachToRopeAction_FWDDECL)
#define IL2CPP_STRUCT_AttachToRopeAction_FWDDECL
#include <Modloader/app/structs/AttachToRopeAction__Class.h>
#endif
#undef IL2CPP_STRUCT_AttachToRopeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachToRopeAction_DEFINED) && !defined(IL2CPP_STRUCT_AttachToRopeAction_FWDDECL)
#include <Modloader/app/structs/AttachToRopeAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachToRopeAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
