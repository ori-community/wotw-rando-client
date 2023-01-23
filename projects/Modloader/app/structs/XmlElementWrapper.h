#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElementWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElementWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementWrapper_DEFINED)
#include <Modloader/app/structs/XmlElementWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_XmlElementWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlElementWrapper_DEFINED
struct XmlElementWrapper__Class;
struct XmlElementWrapper {
    struct XmlElementWrapper__Class* klass;
    MonitorData* monitor;
    struct XmlElementWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlElementWrapper_FWDDECL)
#define IL2CPP_STRUCT_XmlElementWrapper_FWDDECL
#include <Modloader/app/structs/XmlElementWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlElementWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementWrapper_DEFINED) && !defined(IL2CPP_STRUCT_XmlElementWrapper_FWDDECL)
#include <Modloader/app/structs/XmlElementWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElementWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
