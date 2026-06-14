#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlSingleStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlSingleStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlSingleStorage_DEFINED)
#include <Modloader/app/structs/SqlSingleStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlSingleStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlSingleStorage_DEFINED
struct SqlSingleStorage__Class;
struct SqlSingleStorage {
    struct SqlSingleStorage__Class* klass;
    MonitorData* monitor;
    struct SqlSingleStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlSingleStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlSingleStorage_FWDDECL
#include <Modloader/app/structs/SqlSingleStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlSingleStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlSingleStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlSingleStorage_FWDDECL)
#include <Modloader/app/structs/SqlSingleStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlSingleStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
