#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlBytes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlBytes_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBytes_DEFINED)
#include <Modloader/app/structs/SqlBytes__Fields.h>
#if defined(IL2CPP_STRUCT_SqlBytes__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlBytes_DEFINED
struct SqlBytes__Class;
struct SqlBytes {
    struct SqlBytes__Class* klass;
    MonitorData* monitor;
    struct SqlBytes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlBytes_FWDDECL)
#define IL2CPP_STRUCT_SqlBytes_FWDDECL
#include <Modloader/app/structs/SqlBytes__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlBytes_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlBytes_DEFINED) && !defined(IL2CPP_STRUCT_SqlBytes_FWDDECL)
#include <Modloader/app/structs/SqlBytes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlBytes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
