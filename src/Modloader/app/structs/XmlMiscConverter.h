#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlMiscConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlMiscConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMiscConverter_DEFINED)
#include <Modloader/app/structs/XmlMiscConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlMiscConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlMiscConverter_DEFINED
struct XmlMiscConverter__Class;
struct XmlMiscConverter {
    struct XmlMiscConverter__Class* klass;
    MonitorData* monitor;
    struct XmlMiscConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlMiscConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlMiscConverter_FWDDECL
#include <Modloader/app/structs/XmlMiscConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlMiscConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlMiscConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlMiscConverter_FWDDECL)
#include <Modloader/app/structs/XmlMiscConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlMiscConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
