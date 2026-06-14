#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XUserAddCompleted_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XUserAddCompleted_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserAddCompleted_DEFINED)
#include <Modloader/app/structs/XUserAddCompleted__Fields.h>
#if defined(IL2CPP_STRUCT_XUserAddCompleted__Fields_DEFINED)
#define IL2CPP_STRUCT_XUserAddCompleted_DEFINED
struct XUserAddCompleted__Class;
struct XUserAddCompleted {
    struct XUserAddCompleted__Class* klass;
    MonitorData* monitor;
    struct XUserAddCompleted__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XUserAddCompleted_FWDDECL)
#define IL2CPP_STRUCT_XUserAddCompleted_FWDDECL
#include <Modloader/app/structs/XUserAddCompleted__Class.h>
#endif
#undef IL2CPP_STRUCT_XUserAddCompleted_INITIALIZING
#if !defined(IL2CPP_STRUCT_XUserAddCompleted_DEFINED) && !defined(IL2CPP_STRUCT_XUserAddCompleted_FWDDECL)
#include <Modloader/app/structs/XUserAddCompleted.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XUserAddCompleted.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
