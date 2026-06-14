#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlCustomFormatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlCustomFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCustomFormatter_DEFINED)
#define IL2CPP_STRUCT_XmlCustomFormatter_DEFINED
struct XmlCustomFormatter__Class;
struct XmlCustomFormatter {
    struct XmlCustomFormatter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlCustomFormatter_FWDDECL)
#define IL2CPP_STRUCT_XmlCustomFormatter_FWDDECL
#include <Modloader/app/structs/XmlCustomFormatter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlCustomFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlCustomFormatter_DEFINED) && !defined(IL2CPP_STRUCT_XmlCustomFormatter_FWDDECL)
#include <Modloader/app/structs/XmlCustomFormatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlCustomFormatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
