#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElementEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElementEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementEventHandler_DEFINED)
#include <Modloader/app/structs/XmlElementEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_XmlElementEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlElementEventHandler_DEFINED
struct XmlElementEventHandler__Class;
struct XmlElementEventHandler {
    struct XmlElementEventHandler__Class* klass;
    MonitorData* monitor;
    struct XmlElementEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlElementEventHandler_FWDDECL)
#define IL2CPP_STRUCT_XmlElementEventHandler_FWDDECL
#include <Modloader/app/structs/XmlElementEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlElementEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElementEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_XmlElementEventHandler_FWDDECL)
#include <Modloader/app/structs/XmlElementEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElementEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
