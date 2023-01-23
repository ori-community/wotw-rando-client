#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JSONDataReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JSONDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONDataReader_DEFINED)
#include <Modloader/app/structs/JSONDataReader__Fields.h>
#if defined(IL2CPP_STRUCT_JSONDataReader__Fields_DEFINED)
#define IL2CPP_STRUCT_JSONDataReader_DEFINED
struct JSONDataReader__Class;
struct JSONDataReader {
    struct JSONDataReader__Class* klass;
    MonitorData* monitor;
    struct JSONDataReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JSONDataReader_FWDDECL)
#define IL2CPP_STRUCT_JSONDataReader_FWDDECL
#include <Modloader/app/structs/JSONDataReader__Class.h>
#endif
#undef IL2CPP_STRUCT_JSONDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONDataReader_DEFINED) && !defined(IL2CPP_STRUCT_JSONDataReader_FWDDECL)
#include <Modloader/app/structs/JSONDataReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JSONDataReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
