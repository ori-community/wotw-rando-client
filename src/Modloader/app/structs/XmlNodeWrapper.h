#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper_DEFINED)
#include <Modloader/app/structs/XmlNodeWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNodeWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeWrapper_DEFINED
struct XmlNodeWrapper__Class;
struct XmlNodeWrapper {
    struct XmlNodeWrapper__Class* klass;
    MonitorData* monitor;
    struct XmlNodeWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeWrapper_FWDDECL
#include <Modloader/app/structs/XmlNodeWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeWrapper_FWDDECL)
#include <Modloader/app/structs/XmlNodeWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
