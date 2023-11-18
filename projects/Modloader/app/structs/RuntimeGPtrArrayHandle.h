#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGPtrArrayHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGPtrArrayHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeGPtrArrayHandle_DEFINED
struct RuntimeStructs_GPtrArray;
struct RuntimeGPtrArrayHandle {
    struct RuntimeStructs_GPtrArray* value;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGPtrArrayHandle_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_GPtrArray.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGPtrArrayHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle_FWDDECL)
#include <Modloader/app/structs/RuntimeGPtrArrayHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGPtrArrayHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
