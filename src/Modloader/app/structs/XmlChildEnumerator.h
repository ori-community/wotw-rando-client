#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlChildEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlChildEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlChildEnumerator_DEFINED)
#include <Modloader/app/structs/XmlChildEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_XmlChildEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlChildEnumerator_DEFINED
struct XmlChildEnumerator__Class;
struct XmlChildEnumerator {
    struct XmlChildEnumerator__Class* klass;
    MonitorData* monitor;
    struct XmlChildEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlChildEnumerator_FWDDECL)
#define IL2CPP_STRUCT_XmlChildEnumerator_FWDDECL
#include <Modloader/app/structs/XmlChildEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlChildEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlChildEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_XmlChildEnumerator_FWDDECL)
#include <Modloader/app/structs/XmlChildEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlChildEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
