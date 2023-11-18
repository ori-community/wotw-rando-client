#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlCDataSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlCDataSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCDataSection_DEFINED)
#include <Modloader/app/structs/XmlCDataSection__Fields.h>
#if defined(IL2CPP_STRUCT_XmlCDataSection__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlCDataSection_DEFINED
struct XmlCDataSection__Class;
struct XmlCDataSection {
    struct XmlCDataSection__Class* klass;
    MonitorData* monitor;
    struct XmlCDataSection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlCDataSection_FWDDECL)
#define IL2CPP_STRUCT_XmlCDataSection_FWDDECL
#include <Modloader/app/structs/XmlCDataSection__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlCDataSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCDataSection_DEFINED) && !defined(IL2CPP_STRUCT_XmlCDataSection_FWDDECL)
#include <Modloader/app/structs/XmlCDataSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlCDataSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
