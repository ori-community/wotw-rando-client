#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWhitespace_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWhitespace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWhitespace_DEFINED)
#include <Modloader/app/structs/XmlWhitespace__Fields.h>
#if defined(IL2CPP_STRUCT_XmlWhitespace__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlWhitespace_DEFINED
struct XmlWhitespace__Class;
struct XmlWhitespace {
    struct XmlWhitespace__Class* klass;
    MonitorData* monitor;
    struct XmlWhitespace__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlWhitespace_FWDDECL)
#define IL2CPP_STRUCT_XmlWhitespace_FWDDECL
#include <Modloader/app/structs/XmlWhitespace__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlWhitespace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWhitespace_DEFINED) && !defined(IL2CPP_STRUCT_XmlWhitespace_FWDDECL)
#include <Modloader/app/structs/XmlWhitespace.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWhitespace.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
