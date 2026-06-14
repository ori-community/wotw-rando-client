#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultBinder_BinderState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultBinder_BinderState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultBinder_BinderState_DEFINED)
#include <Modloader/app/structs/DefaultBinder_BinderState__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultBinder_BinderState__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultBinder_BinderState_DEFINED
struct DefaultBinder_BinderState__Class;
struct DefaultBinder_BinderState {
    struct DefaultBinder_BinderState__Class* klass;
    MonitorData* monitor;
    struct DefaultBinder_BinderState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultBinder_BinderState_FWDDECL)
#define IL2CPP_STRUCT_DefaultBinder_BinderState_FWDDECL
#include <Modloader/app/structs/DefaultBinder_BinderState__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultBinder_BinderState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultBinder_BinderState_DEFINED) && !defined(IL2CPP_STRUCT_DefaultBinder_BinderState_FWDDECL)
#include <Modloader/app/structs/DefaultBinder_BinderState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultBinder_BinderState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
