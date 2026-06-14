#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowPagesAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowPagesAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowPagesAction_DEFINED)
#include <Modloader/app/structs/ShowPagesAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowPagesAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowPagesAction_DEFINED
struct ShowPagesAction__Class;
struct ShowPagesAction {
    struct ShowPagesAction__Class* klass;
    MonitorData* monitor;
    struct ShowPagesAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowPagesAction_FWDDECL)
#define IL2CPP_STRUCT_ShowPagesAction_FWDDECL
#include <Modloader/app/structs/ShowPagesAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowPagesAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowPagesAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowPagesAction_FWDDECL)
#include <Modloader/app/structs/ShowPagesAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowPagesAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
