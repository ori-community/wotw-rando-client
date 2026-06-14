#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XTaskQueueHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XTaskQueueHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTaskQueueHandle_DEFINED)
#define IL2CPP_STRUCT_XTaskQueueHandle_DEFINED
struct XTaskQueueHandle {
    void* intPtr;
};
#endif
#if !defined(IL2CPP_STRUCT_XTaskQueueHandle_FWDDECL)
#define IL2CPP_STRUCT_XTaskQueueHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_XTaskQueueHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTaskQueueHandle_DEFINED) && !defined(IL2CPP_STRUCT_XTaskQueueHandle_FWDDECL)
#include <Modloader/app/structs/XTaskQueueHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XTaskQueueHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
