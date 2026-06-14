#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Axis__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Axis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Axis__Fields_DEFINED)
#include <Modloader/app/structs/Axis_AxisType__Enum.h>
#include <Modloader/app/structs/XPathNodeType__Enum.h>
#if defined(IL2CPP_STRUCT_Axis_AxisType__Enum_DEFINED) && defined(IL2CPP_STRUCT_XPathNodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_Axis__Fields_DEFINED
struct AstNode;
struct String;
struct __declspec(align(8)) Axis__Fields {
    Axis_AxisType__Enum axisType;

    struct AstNode* input;
    struct String* prefix;
    struct String* name;
    XPathNodeType__Enum nodeType;

    bool abbrAxis;
    struct String* urn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Axis__Fields_FWDDECL)
#define IL2CPP_STRUCT_Axis__Fields_FWDDECL
#include <Modloader/app/structs/AstNode.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Axis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Axis__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Axis__Fields_FWDDECL)
#include <Modloader/app/structs/Axis__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Axis__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
