#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeEventArgs__Fields_DEFINED
struct Object;
struct XmlNode;
struct __declspec(align(8)) XmlNodeEventArgs__Fields {
    struct Object* o;
    struct XmlNode* xmlNode;
    int32_t lineNumber;
    int32_t linePosition;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNode.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/XmlNodeEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
