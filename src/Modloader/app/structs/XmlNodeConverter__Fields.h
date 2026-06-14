#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeConverter__Fields_DEFINED
struct String;
struct __declspec(align(8)) XmlNodeConverter__Fields {
    struct String* _DeserializeRootElementName_k__BackingField;
    bool _WriteArrayAttribute_k__BackingField;
    bool _OmitRootObject_k__BackingField;
    bool _EncodeSpecialCharacters_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeConverter__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeConverter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNodeConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
