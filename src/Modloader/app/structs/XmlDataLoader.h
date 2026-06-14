#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDataLoader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDataLoader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDataLoader_DEFINED)
#include <Modloader/app/structs/XmlDataLoader__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDataLoader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDataLoader_DEFINED
struct XmlDataLoader__Class;
struct XmlDataLoader {
    struct XmlDataLoader__Class* klass;
    MonitorData* monitor;
    struct XmlDataLoader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDataLoader_FWDDECL)
#define IL2CPP_STRUCT_XmlDataLoader_FWDDECL
#include <Modloader/app/structs/XmlDataLoader__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDataLoader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDataLoader_DEFINED) && !defined(IL2CPP_STRUCT_XmlDataLoader_FWDDECL)
#include <Modloader/app/structs/XmlDataLoader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDataLoader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
