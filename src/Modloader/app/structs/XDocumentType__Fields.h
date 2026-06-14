#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XDocumentType__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XDocumentType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocumentType__Fields_DEFINED)
#include <Modloader/app/structs/XNode__Fields.h>
#if defined(IL2CPP_STRUCT_XNode__Fields_DEFINED)
#define IL2CPP_STRUCT_XDocumentType__Fields_DEFINED
struct String;
struct IDtdInfo;
struct XDocumentType__Fields {
    struct XNode__Fields _;
    struct String* name;
    struct String* publicId;
    struct String* systemId;
    struct String* internalSubset;
    struct IDtdInfo* dtdInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XDocumentType__Fields_FWDDECL)
#define IL2CPP_STRUCT_XDocumentType__Fields_FWDDECL
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XDocumentType__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XDocumentType__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XDocumentType__Fields_FWDDECL)
#include <Modloader/app/structs/XDocumentType__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XDocumentType__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
