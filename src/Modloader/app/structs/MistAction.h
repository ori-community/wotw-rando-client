#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MistAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MistAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistAction_DEFINED)
#include <Modloader/app/structs/MistAction__Fields.h>
#if defined(IL2CPP_STRUCT_MistAction__Fields_DEFINED)
#define IL2CPP_STRUCT_MistAction_DEFINED
struct MistAction__Class;
struct MistAction {
    struct MistAction__Class* klass;
    MonitorData* monitor;
    struct MistAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MistAction_FWDDECL)
#define IL2CPP_STRUCT_MistAction_FWDDECL
#include <Modloader/app/structs/MistAction__Class.h>
#endif
#undef IL2CPP_STRUCT_MistAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistAction_DEFINED) && !defined(IL2CPP_STRUCT_MistAction_FWDDECL)
#include <Modloader/app/structs/MistAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MistAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
