#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlByte__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlByte__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlByte__Boxed_DEFINED)
#include <Modloader/app/structs/SqlByte.h>
#if defined(IL2CPP_STRUCT_SqlByte_DEFINED)
#define IL2CPP_STRUCT_SqlByte__Boxed_DEFINED
struct SqlByte__Class;
struct SqlByte__Boxed {
    struct SqlByte__Class* klass;
    MonitorData* monitor;
    struct SqlByte fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlByte__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlByte__Boxed_FWDDECL
#include <Modloader/app/structs/SqlByte__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlByte__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlByte__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlByte__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlByte__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlByte__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
