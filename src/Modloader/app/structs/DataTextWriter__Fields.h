#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTextWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTextWriter__Fields_DEFINED)
#include <Modloader/app/structs/XmlWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTextWriter__Fields_DEFINED
struct XmlWriter;
struct DataTextWriter__Fields {
    struct XmlWriter__Fields _;
    struct XmlWriter* _xmltextWriter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTextWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataTextWriter__Fields_FWDDECL
#include <Modloader/app/structs/XmlWriter.h>
#endif
#undef IL2CPP_STRUCT_DataTextWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTextWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataTextWriter__Fields_FWDDECL)
#include <Modloader/app/structs/DataTextWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTextWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
