#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XElement__Fields_DEFINED)
#include <Modloader/app/structs/XContainer__Fields.h>
#if defined(IL2CPP_STRUCT_XContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_XElement__Fields_DEFINED
struct XName;
struct XAttribute;
struct XElement__Fields {
    struct XContainer__Fields _;
    struct XName* name;
    struct XAttribute* lastAttr;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_XElement__Fields_FWDDECL
#include <Modloader/app/structs/XAttribute.h>
#include <Modloader/app/structs/XName.h>
#endif
#undef IL2CPP_STRUCT_XElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XElement__Fields_FWDDECL)
#include <Modloader/app/structs/XElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
