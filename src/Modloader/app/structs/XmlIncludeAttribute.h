#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlIncludeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlIncludeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlIncludeAttribute_DEFINED)
#include <Modloader/app/structs/XmlIncludeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XmlIncludeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlIncludeAttribute_DEFINED
struct XmlIncludeAttribute__Class;
struct XmlIncludeAttribute {
    struct XmlIncludeAttribute__Class* klass;
    MonitorData* monitor;
    struct XmlIncludeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlIncludeAttribute_FWDDECL)
#define IL2CPP_STRUCT_XmlIncludeAttribute_FWDDECL
#include <Modloader/app/structs/XmlIncludeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlIncludeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlIncludeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XmlIncludeAttribute_FWDDECL)
#include <Modloader/app/structs/XmlIncludeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlIncludeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
