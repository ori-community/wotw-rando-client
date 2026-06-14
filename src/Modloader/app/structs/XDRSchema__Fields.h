#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDRSchema__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDRSchema__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDRSchema__Fields_DEFINED)
#define IL2CPP_STRUCT_XDRSchema__Fields_DEFINED
struct String;
struct XmlElement;
struct DataSet;
struct __declspec(align(8)) XDRSchema__Fields {
    struct String* _schemaName;
    struct String* _schemaUri;
    struct XmlElement* _schemaRoot;
    struct DataSet* _ds_1;
};
#endif
#if !defined(IL2CPP_STRUCT_XDRSchema__Fields_FWDDECL)
#define IL2CPP_STRUCT_XDRSchema__Fields_FWDDECL
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlElement.h>
#endif
#undef IL2CPP_STRUCT_XDRSchema__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDRSchema__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XDRSchema__Fields_FWDDECL)
#include <Modloader/app/structs/XDRSchema__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDRSchema__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
