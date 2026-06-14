#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XTaskQueueHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XTaskQueueHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTaskQueueHandle__Boxed_DEFINED)
#include <Modloader/app/structs/XTaskQueueHandle.h>
#if defined(IL2CPP_STRUCT_XTaskQueueHandle_DEFINED)
#define IL2CPP_STRUCT_XTaskQueueHandle__Boxed_DEFINED
struct XTaskQueueHandle__Class;
struct XTaskQueueHandle__Boxed {
    struct XTaskQueueHandle__Class* klass;
    MonitorData* monitor;
    struct XTaskQueueHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XTaskQueueHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XTaskQueueHandle__Boxed_FWDDECL
#include <Modloader/app/structs/XTaskQueueHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_XTaskQueueHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTaskQueueHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XTaskQueueHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/XTaskQueueHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XTaskQueueHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
