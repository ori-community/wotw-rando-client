#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScrollUIAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScrollUIAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollUIAction_DEFINED)
#include <Modloader/app/structs/ScrollUIAction__Fields.h>
#if defined(IL2CPP_STRUCT_ScrollUIAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ScrollUIAction_DEFINED
struct ScrollUIAction__Class;
struct ScrollUIAction {
    struct ScrollUIAction__Class* klass;
    MonitorData* monitor;
    struct ScrollUIAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScrollUIAction_FWDDECL)
#define IL2CPP_STRUCT_ScrollUIAction_FWDDECL
#include <Modloader/app/structs/ScrollUIAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ScrollUIAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollUIAction_DEFINED) && !defined(IL2CPP_STRUCT_ScrollUIAction_FWDDECL)
#include <Modloader/app/structs/ScrollUIAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScrollUIAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
