#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextEncoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextEncoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextEncoder_DEFINED)
#include <Modloader/app/structs/XmlTextEncoder__Fields.h>
#if defined(IL2CPP_STRUCT_XmlTextEncoder__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlTextEncoder_DEFINED
struct XmlTextEncoder__Class;
struct XmlTextEncoder {
    struct XmlTextEncoder__Class* klass;
    MonitorData* monitor;
    struct XmlTextEncoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextEncoder_FWDDECL)
#define IL2CPP_STRUCT_XmlTextEncoder_FWDDECL
#include <Modloader/app/structs/XmlTextEncoder__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlTextEncoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextEncoder_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextEncoder_FWDDECL)
#include <Modloader/app/structs/XmlTextEncoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextEncoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
