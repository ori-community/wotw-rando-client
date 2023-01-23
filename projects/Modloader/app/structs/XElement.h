#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XElement_DEFINED)
#include <Modloader/app/structs/XElement__Fields.h>
#if defined(IL2CPP_STRUCT_XElement__Fields_DEFINED)
#define IL2CPP_STRUCT_XElement_DEFINED
struct XElement__Class;
struct XElement {
    struct XElement__Class* klass;
    MonitorData* monitor;
    struct XElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XElement_FWDDECL)
#define IL2CPP_STRUCT_XElement_FWDDECL
#include <Modloader/app/structs/XElement__Class.h>
#endif
#undef IL2CPP_STRUCT_XElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XElement_DEFINED) && !defined(IL2CPP_STRUCT_XElement_FWDDECL)
#include <Modloader/app/structs/XElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
