#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlBinary__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlBinary__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBinary__Boxed_DEFINED)
#include <Modloader/app/structs/SqlBinary.h>
#if defined(IL2CPP_STRUCT_SqlBinary_DEFINED)
#define IL2CPP_STRUCT_SqlBinary__Boxed_DEFINED
struct SqlBinary__Class;
struct SqlBinary__Boxed {
    struct SqlBinary__Class* klass;
    MonitorData* monitor;
    struct SqlBinary fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlBinary__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlBinary__Boxed_FWDDECL
#include <Modloader/app/structs/SqlBinary__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlBinary__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBinary__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlBinary__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlBinary__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlBinary__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
