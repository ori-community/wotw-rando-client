#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetItemAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetItemAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetItemAction_DEFINED)
#include <Modloader/app/structs/GetItemAction__Fields.h>
#if defined(IL2CPP_STRUCT_GetItemAction__Fields_DEFINED)
#define IL2CPP_STRUCT_GetItemAction_DEFINED
struct GetItemAction__Class;
struct GetItemAction {
    struct GetItemAction__Class* klass;
    MonitorData* monitor;
    struct GetItemAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetItemAction_FWDDECL)
#define IL2CPP_STRUCT_GetItemAction_FWDDECL
#include <Modloader/app/structs/GetItemAction__Class.h>
#endif
#undef IL2CPP_STRUCT_GetItemAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetItemAction_DEFINED) && !defined(IL2CPP_STRUCT_GetItemAction_FWDDECL)
#include <Modloader/app/structs/GetItemAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetItemAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
