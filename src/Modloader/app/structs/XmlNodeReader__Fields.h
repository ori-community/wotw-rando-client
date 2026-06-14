#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeReader__Fields_DEFINED)
#include <Modloader/app/structs/ReadState__Enum_1.h>
#include <Modloader/app/structs/XmlNodeType__Enum.h>
#if defined(IL2CPP_STRUCT_XmlNodeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ReadState__Enum_1_DEFINED)
#define IL2CPP_STRUCT_XmlNodeReader__Fields_DEFINED
struct XmlNodeReaderNavigator;
struct ReadContentAsBinaryHelper;
struct __declspec(align(8)) XmlNodeReader__Fields {
    struct XmlNodeReaderNavigator* readerNav;
    XmlNodeType__Enum nodeType;

    int32_t curDepth;
    ReadState__Enum_1 readState;

    bool fEOF;
    bool bResolveEntity;
    bool bStartFromDocument;
    bool bInReadBinary;
    struct ReadContentAsBinaryHelper* readBinaryHelper;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeReader__Fields_FWDDECL
#include <Modloader/app/structs/ReadContentAsBinaryHelper.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeReader__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNodeReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
