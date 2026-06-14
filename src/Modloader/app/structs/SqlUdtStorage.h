#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlUdtStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlUdtStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlUdtStorage_DEFINED)
#include <Modloader/app/structs/SqlUdtStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlUdtStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlUdtStorage_DEFINED
struct SqlUdtStorage__Class;
struct SqlUdtStorage {
    struct SqlUdtStorage__Class* klass;
    MonitorData* monitor;
    struct SqlUdtStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlUdtStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlUdtStorage_FWDDECL
#include <Modloader/app/structs/SqlUdtStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlUdtStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlUdtStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlUdtStorage_FWDDECL)
#include <Modloader/app/structs/SqlUdtStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlUdtStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
