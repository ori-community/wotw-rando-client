#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReEngageUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReEngageUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReEngageUI_DEFINED)
#include <Modloader/app/structs/ReEngageUI__Fields.h>
#if defined(IL2CPP_STRUCT_ReEngageUI__Fields_DEFINED)
#define IL2CPP_STRUCT_ReEngageUI_DEFINED
struct ReEngageUI__Class;
struct ReEngageUI {
    struct ReEngageUI__Class* klass;
    MonitorData* monitor;
    struct ReEngageUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReEngageUI_FWDDECL)
#define IL2CPP_STRUCT_ReEngageUI_FWDDECL
#include <Modloader/app/structs/ReEngageUI__Class.h>
#endif
#undef IL2CPP_STRUCT_ReEngageUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReEngageUI_DEFINED) && !defined(IL2CPP_STRUCT_ReEngageUI_FWDDECL)
#include <Modloader/app/structs/ReEngageUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReEngageUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
