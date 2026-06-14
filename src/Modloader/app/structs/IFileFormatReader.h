#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFileFormatReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFileFormatReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFileFormatReader_DEFINED)
#define IL2CPP_STRUCT_IFileFormatReader_DEFINED
struct IFileFormatReader__Class;
struct IFileFormatReader {
    struct IFileFormatReader__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFileFormatReader_FWDDECL)
#define IL2CPP_STRUCT_IFileFormatReader_FWDDECL
#include <Modloader/app/structs/IFileFormatReader__Class.h>
#endif
#undef IL2CPP_STRUCT_IFileFormatReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFileFormatReader_DEFINED) && !defined(IL2CPP_STRUCT_IFileFormatReader_FWDDECL)
#include <Modloader/app/structs/IFileFormatReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFileFormatReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
