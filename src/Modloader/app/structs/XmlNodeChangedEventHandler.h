#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNodeChangedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNodeChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventHandler_DEFINED)
#include <Modloader/app/structs/XmlNodeChangedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNodeChangedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNodeChangedEventHandler_DEFINED
struct XmlNodeChangedEventHandler__Class;
struct XmlNodeChangedEventHandler {
    struct XmlNodeChangedEventHandler__Class* klass;
    MonitorData* monitor;
    struct XmlNodeChangedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_XmlNodeChangedEventHandler_FWDDECL
#include <Modloader/app/structs/XmlNodeChangedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNodeChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNodeChangedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_XmlNodeChangedEventHandler_FWDDECL)
#include <Modloader/app/structs/XmlNodeChangedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNodeChangedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
