#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDataReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDataReader_DEFINED)
#define IL2CPP_STRUCT_IDataReader_DEFINED
struct IDataReader__Class;
struct IDataReader {
    struct IDataReader__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDataReader_FWDDECL)
#define IL2CPP_STRUCT_IDataReader_FWDDECL
#include <Modloader/app/structs/IDataReader__Class.h>
#endif
#undef IL2CPP_STRUCT_IDataReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDataReader_DEFINED) && !defined(IL2CPP_STRUCT_IDataReader_FWDDECL)
#include <Modloader/app/structs/IDataReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDataReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
