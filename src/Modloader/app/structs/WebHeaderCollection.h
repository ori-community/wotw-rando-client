#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebHeaderCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebHeaderCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebHeaderCollection_DEFINED)
#include <Modloader/app/structs/WebHeaderCollection__Fields.h>
#if defined(IL2CPP_STRUCT_WebHeaderCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_WebHeaderCollection_DEFINED
struct WebHeaderCollection__Class;
struct WebHeaderCollection {
    struct WebHeaderCollection__Class* klass;
    MonitorData* monitor;
    struct WebHeaderCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebHeaderCollection_FWDDECL)
#define IL2CPP_STRUCT_WebHeaderCollection_FWDDECL
#include <Modloader/app/structs/WebHeaderCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_WebHeaderCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebHeaderCollection_DEFINED) && !defined(IL2CPP_STRUCT_WebHeaderCollection_FWDDECL)
#include <Modloader/app/structs/WebHeaderCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebHeaderCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
