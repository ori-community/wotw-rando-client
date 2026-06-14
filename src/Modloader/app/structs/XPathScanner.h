#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathScanner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathScanner_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathScanner_DEFINED)
#include <Modloader/app/structs/XPathScanner__Fields.h>
#if defined(IL2CPP_STRUCT_XPathScanner__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathScanner_DEFINED
struct XPathScanner__Class;
struct XPathScanner {
    struct XPathScanner__Class* klass;
    MonitorData* monitor;
    struct XPathScanner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathScanner_FWDDECL)
#define IL2CPP_STRUCT_XPathScanner_FWDDECL
#include <Modloader/app/structs/XPathScanner__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathScanner_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathScanner_DEFINED) && !defined(IL2CPP_STRUCT_XPathScanner_FWDDECL)
#include <Modloader/app/structs/XPathScanner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathScanner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
