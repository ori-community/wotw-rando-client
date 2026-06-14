#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallbackState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallbackState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackState_DEFINED)
#include <Modloader/app/structs/CallbackState__Fields.h>
#if defined(IL2CPP_STRUCT_CallbackState__Fields_DEFINED)
#define IL2CPP_STRUCT_CallbackState_DEFINED
struct CallbackState__Class;
struct CallbackState {
    struct CallbackState__Class* klass;
    MonitorData* monitor;
    struct CallbackState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallbackState_FWDDECL)
#define IL2CPP_STRUCT_CallbackState_FWDDECL
#include <Modloader/app/structs/CallbackState__Class.h>
#endif
#undef IL2CPP_STRUCT_CallbackState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackState_DEFINED) && !defined(IL2CPP_STRUCT_CallbackState_FWDDECL)
#include <Modloader/app/structs/CallbackState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallbackState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
