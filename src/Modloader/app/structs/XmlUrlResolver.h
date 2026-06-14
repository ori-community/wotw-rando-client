#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlUrlResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlUrlResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUrlResolver_DEFINED)
#include <Modloader/app/structs/XmlUrlResolver__Fields.h>
#if defined(IL2CPP_STRUCT_XmlUrlResolver__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlUrlResolver_DEFINED
struct XmlUrlResolver__Class;
struct XmlUrlResolver {
    struct XmlUrlResolver__Class* klass;
    MonitorData* monitor;
    struct XmlUrlResolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlUrlResolver_FWDDECL)
#define IL2CPP_STRUCT_XmlUrlResolver_FWDDECL
#include <Modloader/app/structs/XmlUrlResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlUrlResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUrlResolver_DEFINED) && !defined(IL2CPP_STRUCT_XmlUrlResolver_FWDDECL)
#include <Modloader/app/structs/XmlUrlResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlUrlResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
