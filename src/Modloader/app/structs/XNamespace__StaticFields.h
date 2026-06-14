#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XNamespace__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XNamespace__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNamespace__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XNamespace__StaticFields_DEFINED
struct XHashtable_1_System_WeakReference_;
struct WeakReference;
struct XNamespace__StaticFields {
    struct XHashtable_1_System_WeakReference_* namespaces;
    struct WeakReference* refNone;
    struct WeakReference* refXml;
    struct WeakReference* refXmlns;
};
#endif
#if !defined(IL2CPP_STRUCT_XNamespace__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XNamespace__StaticFields_FWDDECL
#include <Modloader/app/structs/WeakReference.h>
#include <Modloader/app/structs/XHashtable_1_System_WeakReference_.h>
#endif
#undef IL2CPP_STRUCT_XNamespace__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNamespace__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XNamespace__StaticFields_FWDDECL)
#include <Modloader/app/structs/XNamespace__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XNamespace__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
