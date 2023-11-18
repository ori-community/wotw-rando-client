#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlText_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlText_DEFINED)
#include <Modloader/app/structs/XmlText__Fields.h>
#if defined(IL2CPP_STRUCT_XmlText__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlText_DEFINED
struct XmlText__Class;
struct XmlText {
    struct XmlText__Class* klass;
    MonitorData* monitor;
    struct XmlText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlText_FWDDECL)
#define IL2CPP_STRUCT_XmlText_FWDDECL
#include <Modloader/app/structs/XmlText__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlText_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlText_DEFINED) && !defined(IL2CPP_STRUCT_XmlText_FWDDECL)
#include <Modloader/app/structs/XmlText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
