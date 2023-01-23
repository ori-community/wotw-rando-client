#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JSONNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JSONNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONNode__Fields_DEFINED)
#include <Modloader/app/structs/JSONNode_NodeType__Enum.h>
#if defined(IL2CPP_STRUCT_JSONNode_NodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_JSONNode__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_;
struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_;
struct __declspec(align(8)) JSONNode__Fields {
    JSONNode_NodeType__Enum _type;

    struct String* _stringValue;
    double _numberValue;
    struct Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_* _objectValue;
    struct List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* _arrayValue;
    bool _boolValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JSONNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_JSONNode__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JSONNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JSONNode__Fields_FWDDECL)
#include <Modloader/app/structs/JSONNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JSONNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
