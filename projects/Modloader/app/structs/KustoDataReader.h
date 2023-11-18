#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KustoDataReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KustoDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_KustoDataReader_DEFINED)
#include <Modloader/app/structs/KustoDataReader__Fields.h>
#if defined(IL2CPP_STRUCT_KustoDataReader__Fields_DEFINED)
#define IL2CPP_STRUCT_KustoDataReader_DEFINED
struct KustoDataReader__Class;
struct KustoDataReader {
    struct KustoDataReader__Class* klass;
    MonitorData* monitor;
    struct KustoDataReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KustoDataReader_FWDDECL)
#define IL2CPP_STRUCT_KustoDataReader_FWDDECL
#include <Modloader/app/structs/KustoDataReader__Class.h>
#endif
#undef IL2CPP_STRUCT_KustoDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_KustoDataReader_DEFINED) && !defined(IL2CPP_STRUCT_KustoDataReader_FWDDECL)
#include <Modloader/app/structs/KustoDataReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KustoDataReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
