#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlLoader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlLoader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlLoader_DEFINED)
#include <Modloader/app/structs/XmlLoader__Fields.h>
#if defined(IL2CPP_STRUCT_XmlLoader__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlLoader_DEFINED
struct XmlLoader__Class;
struct XmlLoader {
    struct XmlLoader__Class* klass;
    MonitorData* monitor;
    struct XmlLoader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlLoader_FWDDECL)
#define IL2CPP_STRUCT_XmlLoader_FWDDECL
#include <Modloader/app/structs/XmlLoader__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlLoader_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlLoader_DEFINED) && !defined(IL2CPP_STRUCT_XmlLoader_FWDDECL)
#include <Modloader/app/structs/XmlLoader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlLoader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
