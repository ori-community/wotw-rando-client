#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNotation_DEFINED)
#include <Modloader/app/structs/XmlNotation__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNotation__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNotation_DEFINED
struct XmlNotation__Class;
struct XmlNotation {
    struct XmlNotation__Class* klass;
    MonitorData* monitor;
    struct XmlNotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNotation_FWDDECL)
#define IL2CPP_STRUCT_XmlNotation_FWDDECL
#include <Modloader/app/structs/XmlNotation__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNotation_DEFINED) && !defined(IL2CPP_STRUCT_XmlNotation_FWDDECL)
#include <Modloader/app/structs/XmlNotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
