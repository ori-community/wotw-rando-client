#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlAttributeEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlAttributeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeEventHandler_DEFINED)
#include <Modloader/app/structs/XmlAttributeEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_XmlAttributeEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlAttributeEventHandler_DEFINED
struct XmlAttributeEventHandler__Class;
struct XmlAttributeEventHandler {
    struct XmlAttributeEventHandler__Class* klass;
    MonitorData* monitor;
    struct XmlAttributeEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlAttributeEventHandler_FWDDECL)
#define IL2CPP_STRUCT_XmlAttributeEventHandler_FWDDECL
#include <Modloader/app/structs/XmlAttributeEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlAttributeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlAttributeEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_XmlAttributeEventHandler_FWDDECL)
#include <Modloader/app/structs/XmlAttributeEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlAttributeEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
