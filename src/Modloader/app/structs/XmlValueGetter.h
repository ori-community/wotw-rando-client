#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlValueGetter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlValueGetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValueGetter_DEFINED)
#include <Modloader/app/structs/XmlValueGetter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlValueGetter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlValueGetter_DEFINED
struct XmlValueGetter__Class;
struct XmlValueGetter {
    struct XmlValueGetter__Class* klass;
    MonitorData* monitor;
    struct XmlValueGetter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlValueGetter_FWDDECL)
#define IL2CPP_STRUCT_XmlValueGetter_FWDDECL
#include <Modloader/app/structs/XmlValueGetter__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlValueGetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlValueGetter_DEFINED) && !defined(IL2CPP_STRUCT_XmlValueGetter_FWDDECL)
#include <Modloader/app/structs/XmlValueGetter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlValueGetter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
