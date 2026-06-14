#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTextReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTextReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTextReader__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTextReader__Fields_DEFINED
struct XmlReader;
struct __declspec(align(8)) DataTextReader__Fields {
    struct XmlReader* _xmlreader;
};
#endif
#if !defined(IL2CPP_STRUCT_DataTextReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataTextReader__Fields_FWDDECL
#include <Modloader/app/structs/XmlReader.h>
#endif
#undef IL2CPP_STRUCT_DataTextReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTextReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataTextReader__Fields_FWDDECL)
#include <Modloader/app/structs/DataTextReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTextReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
