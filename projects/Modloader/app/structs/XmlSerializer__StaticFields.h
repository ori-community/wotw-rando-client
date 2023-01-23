#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializer__StaticFields_DEFINED
struct Hashtable;
struct Encoding;
struct XmlSerializer__StaticFields {
    int32_t generationThreshold;
    bool backgroundGeneration;
    bool deleteTempFiles;
    bool generatorFallback;
    struct Hashtable* serializerTypes;
    struct Encoding* DefaultEncoding;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializer__StaticFields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Hashtable.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializer__StaticFields_FWDDECL)
#include <Modloader/app/structs/XmlSerializer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
