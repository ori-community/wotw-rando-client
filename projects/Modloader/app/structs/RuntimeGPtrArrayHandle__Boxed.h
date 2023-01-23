#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeGPtrArrayHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_DEFINED
struct RuntimeGPtrArrayHandle__Class;
struct RuntimeGPtrArrayHandle__Boxed {
    struct RuntimeGPtrArrayHandle__Class* klass;
    MonitorData* monitor;
    struct RuntimeGPtrArrayHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeGPtrArrayHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGPtrArrayHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeGPtrArrayHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGPtrArrayHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
