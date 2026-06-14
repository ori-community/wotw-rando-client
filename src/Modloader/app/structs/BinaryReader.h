#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryReader_DEFINED)
#include <Modloader/app/structs/BinaryReader__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryReader__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryReader_DEFINED
struct BinaryReader__Class;
struct BinaryReader {
    struct BinaryReader__Class* klass;
    MonitorData* monitor;
    struct BinaryReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryReader_FWDDECL)
#define IL2CPP_STRUCT_BinaryReader_FWDDECL
#include <Modloader/app/structs/BinaryReader__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryReader_DEFINED) && !defined(IL2CPP_STRUCT_BinaryReader_FWDDECL)
#include <Modloader/app/structs/BinaryReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
