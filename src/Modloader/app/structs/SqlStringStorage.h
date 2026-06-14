#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlStringStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlStringStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlStringStorage_DEFINED)
#include <Modloader/app/structs/SqlStringStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlStringStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlStringStorage_DEFINED
struct SqlStringStorage__Class;
struct SqlStringStorage {
    struct SqlStringStorage__Class* klass;
    MonitorData* monitor;
    struct SqlStringStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlStringStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlStringStorage_FWDDECL
#include <Modloader/app/structs/SqlStringStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlStringStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlStringStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlStringStorage_FWDDECL)
#include <Modloader/app/structs/SqlStringStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlStringStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
