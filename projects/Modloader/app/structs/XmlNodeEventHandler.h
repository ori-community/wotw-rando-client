#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeEventHandler_DEFINED)
#include <Modloader/app/structs/XmlNodeEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNodeEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeEventHandler_DEFINED
struct XmlNodeEventHandler__Class;
struct XmlNodeEventHandler {
    struct XmlNodeEventHandler__Class* klass;
    MonitorData* monitor;
    struct XmlNodeEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeEventHandler_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeEventHandler_FWDDECL
#include <Modloader/app/structs/XmlNodeEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeEventHandler_FWDDECL)
#include <Modloader/app/structs/XmlNodeEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
