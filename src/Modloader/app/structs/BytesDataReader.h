#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BytesDataReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BytesDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_BytesDataReader_DEFINED)
#define IL2CPP_STRUCT_BytesDataReader_DEFINED
struct BytesDataReader__Class;
struct BytesDataReader {
    struct BytesDataReader__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BytesDataReader_FWDDECL)
#define IL2CPP_STRUCT_BytesDataReader_FWDDECL
#include <Modloader/app/structs/BytesDataReader__Class.h>
#endif
#undef IL2CPP_STRUCT_BytesDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_BytesDataReader_DEFINED) && !defined(IL2CPP_STRUCT_BytesDataReader_FWDDECL)
#include <Modloader/app/structs/BytesDataReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BytesDataReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
