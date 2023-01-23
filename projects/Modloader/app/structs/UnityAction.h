#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityAction_DEFINED)
#include <Modloader/app/structs/UnityAction__Fields.h>
#if defined(IL2CPP_STRUCT_UnityAction__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityAction_DEFINED
struct UnityAction__Class;
struct UnityAction {
    struct UnityAction__Class* klass;
    MonitorData* monitor;
    struct UnityAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityAction_FWDDECL)
#define IL2CPP_STRUCT_UnityAction_FWDDECL
#include <Modloader/app/structs/UnityAction__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityAction_DEFINED) && !defined(IL2CPP_STRUCT_UnityAction_FWDDECL)
#include <Modloader/app/structs/UnityAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
