#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlSingle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlSingle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlSingle__Boxed_DEFINED)
#include <Modloader/app/structs/SqlSingle.h>
#if defined(IL2CPP_STRUCT_SqlSingle_DEFINED)
#define IL2CPP_STRUCT_SqlSingle__Boxed_DEFINED
struct SqlSingle__Class;
struct SqlSingle__Boxed {
    struct SqlSingle__Class* klass;
    MonitorData* monitor;
    struct SqlSingle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlSingle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlSingle__Boxed_FWDDECL
#include <Modloader/app/structs/SqlSingle__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlSingle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlSingle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlSingle__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlSingle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlSingle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
