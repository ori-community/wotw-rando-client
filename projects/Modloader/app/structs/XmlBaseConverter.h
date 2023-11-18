#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlBaseConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlBaseConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlBaseConverter_DEFINED)
#include <Modloader/app/structs/XmlBaseConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlBaseConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlBaseConverter_DEFINED
struct XmlBaseConverter__Class;
struct XmlBaseConverter {
    struct XmlBaseConverter__Class* klass;
    MonitorData* monitor;
    struct XmlBaseConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlBaseConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlBaseConverter_FWDDECL
#include <Modloader/app/structs/XmlBaseConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlBaseConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlBaseConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlBaseConverter_FWDDECL)
#include <Modloader/app/structs/XmlBaseConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlBaseConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
