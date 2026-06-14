#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FadeToBlackAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FadeToBlackAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeToBlackAction_DEFINED)
#include <Modloader/app/structs/FadeToBlackAction__Fields.h>
#if defined(IL2CPP_STRUCT_FadeToBlackAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FadeToBlackAction_DEFINED
struct FadeToBlackAction__Class;
struct FadeToBlackAction {
    struct FadeToBlackAction__Class* klass;
    MonitorData* monitor;
    struct FadeToBlackAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FadeToBlackAction_FWDDECL)
#define IL2CPP_STRUCT_FadeToBlackAction_FWDDECL
#include <Modloader/app/structs/FadeToBlackAction__Class.h>
#endif
#undef IL2CPP_STRUCT_FadeToBlackAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeToBlackAction_DEFINED) && !defined(IL2CPP_STRUCT_FadeToBlackAction_FWDDECL)
#include <Modloader/app/structs/FadeToBlackAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FadeToBlackAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
