#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationState__Fields_DEFINED)
#include <Modloader/app/structs/StateUnion.h>
#include <Modloader/app/structs/XmlSchemaContentProcessing__Enum.h>
#include <Modloader/app/structs/XmlSchemaValidity__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaContentProcessing__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSchemaValidity__Enum_DEFINED) && defined(IL2CPP_STRUCT_StateUnion_DEFINED)
#define IL2CPP_STRUCT_ValidationState__Fields_DEFINED
struct SchemaElementDecl;
struct String;
struct ConstraintStruct__Array;
struct BitSet__Array;
struct BitSet;
struct List_1_System_Xml_Schema_RangePositionInfo_;
struct __declspec(align(8)) ValidationState__Fields {
    bool IsNill;
    bool IsDefault;
    bool NeedValidateChildren;
    bool CheckRequiredAttribute;
    bool ValidationSkipped;
    XmlSchemaContentProcessing__Enum ProcessContents;

    XmlSchemaValidity__Enum Validity;

    struct SchemaElementDecl* ElementDecl;
    struct SchemaElementDecl* ElementDeclBeforeXsi;
    struct String* LocalName;
    struct String* Namespace;
    struct ConstraintStruct__Array* Constr;
    struct StateUnion CurrentState;
    bool HasMatched;
    struct BitSet__Array* CurPos;
    struct BitSet* AllElementsSet;
    struct List_1_System_Xml_Schema_RangePositionInfo_* RunningPositions;
    bool TooComplex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidationState__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValidationState__Fields_FWDDECL
#include <Modloader/app/structs/BitSet.h>
#include <Modloader/app/structs/BitSet__Array.h>
#include <Modloader/app/structs/ConstraintStruct__Array.h>
#include <Modloader/app/structs/List_1_System_Xml_Schema_RangePositionInfo_.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ValidationState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValidationState__Fields_FWDDECL)
#include <Modloader/app/structs/ValidationState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
