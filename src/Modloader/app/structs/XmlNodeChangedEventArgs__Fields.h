#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/XmlNodeChangedAction__Enum.h>
#if defined(IL2CPP_STRUCT_XmlNodeChangedAction__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_DEFINED
struct XmlNode;
struct String;
struct __declspec(align(8)) XmlNodeChangedEventArgs__Fields {
    XmlNodeChangedAction__Enum action;

    struct XmlNode* node;
    struct XmlNode* oldParent;
    struct XmlNode* newParent;
    struct String* oldValue;
    struct String* newValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNode.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeChangedEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNodeChangedEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeChangedEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
