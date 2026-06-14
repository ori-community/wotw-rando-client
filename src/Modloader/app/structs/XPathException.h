#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathException_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathException_DEFINED)
#include <Modloader/app/structs/XPathException__Fields.h>
#if defined(IL2CPP_STRUCT_XPathException__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathException_DEFINED
struct XPathException__Class;
struct XPathException {
    struct XPathException__Class* klass;
    MonitorData* monitor;
    struct XPathException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathException_FWDDECL)
#define IL2CPP_STRUCT_XPathException_FWDDECL
#include <Modloader/app/structs/XPathException__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathException_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathException_DEFINED) && !defined(IL2CPP_STRUCT_XPathException_FWDDECL)
#include <Modloader/app/structs/XPathException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
