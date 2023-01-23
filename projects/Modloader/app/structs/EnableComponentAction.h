#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnableComponentAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnableComponentAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableComponentAction_DEFINED)
#include <Modloader/app/structs/EnableComponentAction__Fields.h>
#if defined(IL2CPP_STRUCT_EnableComponentAction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnableComponentAction_DEFINED
struct EnableComponentAction__Class;
struct EnableComponentAction {
    struct EnableComponentAction__Class* klass;
    MonitorData* monitor;
    struct EnableComponentAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnableComponentAction_FWDDECL)
#define IL2CPP_STRUCT_EnableComponentAction_FWDDECL
#include <Modloader/app/structs/EnableComponentAction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnableComponentAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableComponentAction_DEFINED) && !defined(IL2CPP_STRUCT_EnableComponentAction_FWDDECL)
#include <Modloader/app/structs/EnableComponentAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnableComponentAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
