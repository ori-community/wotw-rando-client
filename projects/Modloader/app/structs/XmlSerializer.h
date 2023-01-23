#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer_DEFINED)
#include <Modloader/app/structs/XmlSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_XmlSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlSerializer_DEFINED
struct XmlSerializer__Class;
struct XmlSerializer {
    struct XmlSerializer__Class* klass;
    MonitorData* monitor;
    struct XmlSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSerializer_FWDDECL)
#define IL2CPP_STRUCT_XmlSerializer_FWDDECL
#include <Modloader/app/structs/XmlSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSerializer_DEFINED) && !defined(IL2CPP_STRUCT_XmlSerializer_FWDDECL)
#include <Modloader/app/structs/XmlSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
