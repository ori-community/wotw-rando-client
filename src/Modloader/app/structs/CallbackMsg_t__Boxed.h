#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallbackMsg_t__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallbackMsg_t__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackMsg_t__Boxed_DEFINED)
#include <Modloader/app/structs/CallbackMsg_t.h>
#if defined(IL2CPP_STRUCT_CallbackMsg_t_DEFINED)
#define IL2CPP_STRUCT_CallbackMsg_t__Boxed_DEFINED
struct CallbackMsg_t__Class;
struct CallbackMsg_t__Boxed {
    struct CallbackMsg_t__Class* klass;
    MonitorData* monitor;
    struct CallbackMsg_t fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallbackMsg_t__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CallbackMsg_t__Boxed_FWDDECL
#include <Modloader/app/structs/CallbackMsg_t__Class.h>
#endif
#undef IL2CPP_STRUCT_CallbackMsg_t__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackMsg_t__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CallbackMsg_t__Boxed_FWDDECL)
#include <Modloader/app/structs/CallbackMsg_t__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallbackMsg_t__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
