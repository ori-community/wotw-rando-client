#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlNameEx_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlNameEx_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNameEx_DEFINED)
#include <Modloader/app/structs/XmlNameEx__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNameEx__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlNameEx_DEFINED
struct XmlNameEx__Class;
struct XmlNameEx {
    struct XmlNameEx__Class* klass;
    MonitorData* monitor;
    struct XmlNameEx__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlNameEx_FWDDECL)
#define IL2CPP_STRUCT_XmlNameEx_FWDDECL
#include <Modloader/app/structs/XmlNameEx__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlNameEx_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlNameEx_DEFINED) && !defined(IL2CPP_STRUCT_XmlNameEx_FWDDECL)
#include <Modloader/app/structs/XmlNameEx.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlNameEx.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
