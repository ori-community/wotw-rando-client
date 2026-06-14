#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlChildEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlChildEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlChildEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlChildEnumerator__Fields_DEFINED
struct XmlNode;
struct __declspec(align(8)) XmlChildEnumerator__Fields {
    struct XmlNode* container;
    struct XmlNode* child;
    bool isFirst;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlChildEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlChildEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/XmlNode.h>
#endif
#undef IL2CPP_STRUCT_XmlChildEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlChildEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlChildEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/XmlChildEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlChildEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
