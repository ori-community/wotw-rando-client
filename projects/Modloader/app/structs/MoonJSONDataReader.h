#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonJSONDataReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonJSONDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonJSONDataReader_DEFINED)
#include <Modloader/app/structs/MoonJSONDataReader__Fields.h>
#if defined(IL2CPP_STRUCT_MoonJSONDataReader__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonJSONDataReader_DEFINED
struct MoonJSONDataReader__Class;
struct MoonJSONDataReader {
    struct MoonJSONDataReader__Class* klass;
    MonitorData* monitor;
    struct MoonJSONDataReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonJSONDataReader_FWDDECL)
#define IL2CPP_STRUCT_MoonJSONDataReader_FWDDECL
#include <Modloader/app/structs/MoonJSONDataReader__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonJSONDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonJSONDataReader_DEFINED) && !defined(IL2CPP_STRUCT_MoonJSONDataReader_FWDDECL)
#include <Modloader/app/structs/MoonJSONDataReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonJSONDataReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
