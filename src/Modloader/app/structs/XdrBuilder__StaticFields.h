#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder__StaticFields_DEFINED
struct Int32__Array;
struct XdrBuilder_XdrAttributeEntry__Array;
struct XdrBuilder_XdrEntry__Array;
struct XdrBuilder__StaticFields {
    struct Int32__Array* S_XDR_Root_Element;
    struct Int32__Array* S_XDR_Root_SubElements;
    struct Int32__Array* S_XDR_ElementType_SubElements;
    struct Int32__Array* S_XDR_AttributeType_SubElements;
    struct Int32__Array* S_XDR_Group_SubElements;
    struct XdrBuilder_XdrAttributeEntry__Array* S_XDR_Root_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array* S_XDR_ElementType_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array* S_XDR_AttributeType_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array* S_XDR_Element_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array* S_XDR_Attribute_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array* S_XDR_Group_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array* S_XDR_ElementDataType_Attributes;
    struct XdrBuilder_XdrAttributeEntry__Array* S_XDR_AttributeDataType_Attributes;
    struct XdrBuilder_XdrEntry__Array* S_SchemaEntries;
};
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/XdrBuilder_XdrAttributeEntry__Array.h>
#include <Modloader/app/structs/XdrBuilder_XdrEntry__Array.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder__StaticFields_FWDDECL)
#include <Modloader/app/structs/XdrBuilder__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
