#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowStoryTextAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowStoryTextAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowStoryTextAction_DEFINED)
#include <Modloader/app/structs/ShowStoryTextAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowStoryTextAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowStoryTextAction_DEFINED
struct ShowStoryTextAction__Class;
struct ShowStoryTextAction {
    struct ShowStoryTextAction__Class* klass;
    MonitorData* monitor;
    struct ShowStoryTextAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowStoryTextAction_FWDDECL)
#define IL2CPP_STRUCT_ShowStoryTextAction_FWDDECL
#include <Modloader/app/structs/ShowStoryTextAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowStoryTextAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowStoryTextAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowStoryTextAction_FWDDECL)
#include <Modloader/app/structs/ShowStoryTextAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowStoryTextAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
