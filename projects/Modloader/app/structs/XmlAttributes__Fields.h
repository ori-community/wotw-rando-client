#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributes__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttributes__Fields_DEFINED
struct XmlAnyAttributeAttribute;
struct XmlAnyElementAttributes;
struct XmlArrayAttribute;
struct XmlArrayItemAttributes;
struct XmlAttributeAttribute;
struct XmlChoiceIdentifierAttribute;
struct Object;
struct XmlElementAttributes;
struct XmlEnumAttribute;
struct XmlRootAttribute;
struct XmlTextAttribute;
struct XmlTypeAttribute;
struct __declspec(align(8)) XmlAttributes__Fields {
    struct XmlAnyAttributeAttribute* xmlAnyAttribute;
    struct XmlAnyElementAttributes* xmlAnyElements;
    struct XmlArrayAttribute* xmlArray;
    struct XmlArrayItemAttributes* xmlArrayItems;
    struct XmlAttributeAttribute* xmlAttribute;
    struct XmlChoiceIdentifierAttribute* xmlChoiceIdentifier;
    struct Object* xmlDefaultValue;
    struct XmlElementAttributes* xmlElements;
    struct XmlEnumAttribute* xmlEnum;
    bool xmlIgnore;
    bool xmlns;
    struct XmlRootAttribute* xmlRoot;
    struct XmlTextAttribute* xmlText;
    struct XmlTypeAttribute* xmlType;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributes__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributes__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlAnyAttributeAttribute.h>
#include <Modloader/app/structs/XmlAnyElementAttributes.h>
#include <Modloader/app/structs/XmlArrayAttribute.h>
#include <Modloader/app/structs/XmlArrayItemAttributes.h>
#include <Modloader/app/structs/XmlAttributeAttribute.h>
#include <Modloader/app/structs/XmlChoiceIdentifierAttribute.h>
#include <Modloader/app/structs/XmlElementAttributes.h>
#include <Modloader/app/structs/XmlEnumAttribute.h>
#include <Modloader/app/structs/XmlRootAttribute.h>
#include <Modloader/app/structs/XmlTextAttribute.h>
#include <Modloader/app/structs/XmlTypeAttribute.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributes__Fields_FWDDECL)
#include <Modloader/app/structs/XmlAttributes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
