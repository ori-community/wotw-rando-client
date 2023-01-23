#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_DEFINED)
#include <Modloader/app/structs/UnSafeCharBuffer.h>
#if defined(IL2CPP_STRUCT_UnSafeCharBuffer_DEFINED)
#define IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_DEFINED
struct UnSafeCharBuffer__Class;
struct UnSafeCharBuffer__Boxed {
    struct UnSafeCharBuffer__Class* klass;
    MonitorData* monitor;
    struct UnSafeCharBuffer fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_FWDDECL
#include <Modloader/app/structs/UnSafeCharBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UnSafeCharBuffer__Boxed_FWDDECL)
#include <Modloader/app/structs/UnSafeCharBuffer__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnSafeCharBuffer__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
