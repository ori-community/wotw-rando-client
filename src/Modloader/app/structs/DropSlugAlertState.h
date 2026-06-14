#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugAlertState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugAlertState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugAlertState_DEFINED)
#include <Modloader/app/structs/DropSlugAlertState__Fields.h>
#if defined(IL2CPP_STRUCT_DropSlugAlertState__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugAlertState_DEFINED
struct DropSlugAlertState__Class;
struct DropSlugAlertState {
    struct DropSlugAlertState__Class* klass;
    MonitorData* monitor;
    struct DropSlugAlertState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugAlertState_FWDDECL)
#define IL2CPP_STRUCT_DropSlugAlertState_FWDDECL
#include <Modloader/app/structs/DropSlugAlertState__Class.h>
#endif
#undef IL2CPP_STRUCT_DropSlugAlertState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugAlertState_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugAlertState_FWDDECL)
#include <Modloader/app/structs/DropSlugAlertState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugAlertState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
