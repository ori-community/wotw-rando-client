#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_DEFINED)
#include <Modloader/app/structs/SafeGPtrArrayHandle.h>
#if defined(IL2CPP_STRUCT_SafeGPtrArrayHandle_DEFINED)
#define IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_DEFINED
struct SafeGPtrArrayHandle__Class;
struct SafeGPtrArrayHandle__Boxed {
    struct SafeGPtrArrayHandle__Class* klass;
    MonitorData* monitor;
    struct SafeGPtrArrayHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_FWDDECL
#include <Modloader/app/structs/SafeGPtrArrayHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SafeGPtrArrayHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/SafeGPtrArrayHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeGPtrArrayHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
