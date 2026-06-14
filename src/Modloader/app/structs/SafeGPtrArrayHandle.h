#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeGPtrArrayHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeGPtrArrayHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeGPtrArrayHandle_DEFINED)
#include <Modloader/app/structs/RuntimeGPtrArrayHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle_DEFINED)
#define IL2CPP_STRUCT_SafeGPtrArrayHandle_DEFINED
struct SafeGPtrArrayHandle {
    struct RuntimeGPtrArrayHandle handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeGPtrArrayHandle_FWDDECL)
#define IL2CPP_STRUCT_SafeGPtrArrayHandle_FWDDECL
#endif
#undef IL2CPP_STRUCT_SafeGPtrArrayHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeGPtrArrayHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafeGPtrArrayHandle_FWDDECL)
#include <Modloader/app/structs/SafeGPtrArrayHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeGPtrArrayHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
