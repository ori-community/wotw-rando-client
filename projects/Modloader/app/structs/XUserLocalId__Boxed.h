#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XUserLocalId__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XUserLocalId__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserLocalId__Boxed_DEFINED)
#include <Modloader/app/structs/XUserLocalId.h>
#if defined(IL2CPP_STRUCT_XUserLocalId_DEFINED)
#define IL2CPP_STRUCT_XUserLocalId__Boxed_DEFINED
struct XUserLocalId__Class;
struct XUserLocalId__Boxed {
    struct XUserLocalId__Class* klass;
    MonitorData* monitor;
    struct XUserLocalId fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XUserLocalId__Boxed_FWDDECL)
#define IL2CPP_STRUCT_XUserLocalId__Boxed_FWDDECL
#include <Modloader/app/structs/XUserLocalId__Class.h>
#endif
#undef IL2CPP_STRUCT_XUserLocalId__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserLocalId__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_XUserLocalId__Boxed_FWDDECL)
#include <Modloader/app/structs/XUserLocalId__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XUserLocalId__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
