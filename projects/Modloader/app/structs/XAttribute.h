#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAttribute_DEFINED)
#include <Modloader/app/structs/XAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_XAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_XAttribute_DEFINED
struct XAttribute__Class;
struct XAttribute {
    struct XAttribute__Class* klass;
    MonitorData* monitor;
    struct XAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAttribute_FWDDECL)
#define IL2CPP_STRUCT_XAttribute_FWDDECL
#include <Modloader/app/structs/XAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_XAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAttribute_DEFINED) && !defined(IL2CPP_STRUCT_XAttribute_FWDDECL)
#include <Modloader/app/structs/XAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
