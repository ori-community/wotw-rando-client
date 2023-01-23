#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlValueConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlValueConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValueConverter_DEFINED)
#define IL2CPP_STRUCT_XmlValueConverter_DEFINED
struct XmlValueConverter__Class;
struct XmlValueConverter {
    struct XmlValueConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlValueConverter_FWDDECL)
#define IL2CPP_STRUCT_XmlValueConverter_FWDDECL
#include <Modloader/app/structs/XmlValueConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlValueConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValueConverter_DEFINED) && !defined(IL2CPP_STRUCT_XmlValueConverter_FWDDECL)
#include <Modloader/app/structs/XmlValueConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlValueConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
