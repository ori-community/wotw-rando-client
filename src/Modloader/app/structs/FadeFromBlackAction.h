#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FadeFromBlackAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FadeFromBlackAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeFromBlackAction_DEFINED)
#include <Modloader/app/structs/FadeFromBlackAction__Fields.h>
#if defined(IL2CPP_STRUCT_FadeFromBlackAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FadeFromBlackAction_DEFINED
struct FadeFromBlackAction__Class;
struct FadeFromBlackAction {
    struct FadeFromBlackAction__Class* klass;
    MonitorData* monitor;
    struct FadeFromBlackAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FadeFromBlackAction_FWDDECL)
#define IL2CPP_STRUCT_FadeFromBlackAction_FWDDECL
#include <Modloader/app/structs/FadeFromBlackAction__Class.h>
#endif
#undef IL2CPP_STRUCT_FadeFromBlackAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeFromBlackAction_DEFINED) && !defined(IL2CPP_STRUCT_FadeFromBlackAction_FWDDECL)
#include <Modloader/app/structs/FadeFromBlackAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FadeFromBlackAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
