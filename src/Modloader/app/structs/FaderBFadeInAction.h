#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FaderBFadeInAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FaderBFadeInAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderBFadeInAction_DEFINED)
#include <Modloader/app/structs/FaderBFadeInAction__Fields.h>
#if defined(IL2CPP_STRUCT_FaderBFadeInAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FaderBFadeInAction_DEFINED
struct FaderBFadeInAction__Class;
struct FaderBFadeInAction {
    struct FaderBFadeInAction__Class* klass;
    MonitorData* monitor;
    struct FaderBFadeInAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FaderBFadeInAction_FWDDECL)
#define IL2CPP_STRUCT_FaderBFadeInAction_FWDDECL
#include <Modloader/app/structs/FaderBFadeInAction__Class.h>
#endif
#undef IL2CPP_STRUCT_FaderBFadeInAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FaderBFadeInAction_DEFINED) && !defined(IL2CPP_STRUCT_FaderBFadeInAction_FWDDECL)
#include <Modloader/app/structs/FaderBFadeInAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FaderBFadeInAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
