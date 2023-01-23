#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowWispTextAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowWispTextAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowWispTextAction_DEFINED)
#include <Modloader/app/structs/ShowWispTextAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowWispTextAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowWispTextAction_DEFINED
struct ShowWispTextAction__Class;
struct ShowWispTextAction {
    struct ShowWispTextAction__Class* klass;
    MonitorData* monitor;
    struct ShowWispTextAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowWispTextAction_FWDDECL)
#define IL2CPP_STRUCT_ShowWispTextAction_FWDDECL
#include <Modloader/app/structs/ShowWispTextAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowWispTextAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowWispTextAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowWispTextAction_FWDDECL)
#include <Modloader/app/structs/ShowWispTextAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowWispTextAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
