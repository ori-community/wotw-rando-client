#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlConvert_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlConvert_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlConvert_DEFINED)
#define IL2CPP_STRUCT_XmlConvert_DEFINED
struct XmlConvert__Class;
struct XmlConvert {
    struct XmlConvert__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlConvert_FWDDECL)
#define IL2CPP_STRUCT_XmlConvert_FWDDECL
#include <Modloader/app/structs/XmlConvert__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlConvert_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlConvert_DEFINED) && !defined(IL2CPP_STRUCT_XmlConvert_FWDDECL)
#include <Modloader/app/structs/XmlConvert.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlConvert.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
