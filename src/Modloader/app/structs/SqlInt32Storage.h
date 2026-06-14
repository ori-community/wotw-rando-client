#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlInt32Storage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlInt32Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt32Storage_DEFINED)
#include <Modloader/app/structs/SqlInt32Storage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlInt32Storage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlInt32Storage_DEFINED
struct SqlInt32Storage__Class;
struct SqlInt32Storage {
    struct SqlInt32Storage__Class* klass;
    MonitorData* monitor;
    struct SqlInt32Storage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlInt32Storage_FWDDECL)
#define IL2CPP_STRUCT_SqlInt32Storage_FWDDECL
#include <Modloader/app/structs/SqlInt32Storage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlInt32Storage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt32Storage_DEFINED) && !defined(IL2CPP_STRUCT_SqlInt32Storage_FWDDECL)
#include <Modloader/app/structs/SqlInt32Storage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlInt32Storage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
