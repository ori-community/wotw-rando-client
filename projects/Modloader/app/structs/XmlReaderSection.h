#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReaderSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReaderSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReaderSection_DEFINED)
#define IL2CPP_STRUCT_XmlReaderSection_DEFINED
struct XmlReaderSection__Class;
struct XmlReaderSection {
    struct XmlReaderSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlReaderSection_FWDDECL)
#define IL2CPP_STRUCT_XmlReaderSection_FWDDECL
#include <Modloader/app/structs/XmlReaderSection__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlReaderSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReaderSection_DEFINED) && !defined(IL2CPP_STRUCT_XmlReaderSection_FWDDECL)
#include <Modloader/app/structs/XmlReaderSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReaderSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
