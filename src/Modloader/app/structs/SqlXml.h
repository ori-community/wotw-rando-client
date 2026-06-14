#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlXml_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlXml_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlXml_DEFINED)
#include <Modloader/app/structs/SqlXml__Fields.h>
#if defined(IL2CPP_STRUCT_SqlXml__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlXml_DEFINED
struct SqlXml__Class;
struct SqlXml {
    struct SqlXml__Class* klass;
    MonitorData* monitor;
    struct SqlXml__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlXml_FWDDECL)
#define IL2CPP_STRUCT_SqlXml_FWDDECL
#include <Modloader/app/structs/SqlXml__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlXml_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlXml_DEFINED) && !defined(IL2CPP_STRUCT_SqlXml_FWDDECL)
#include <Modloader/app/structs/SqlXml.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlXml.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
