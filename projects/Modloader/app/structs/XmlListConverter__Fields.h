#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlListConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlListConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlListConverter__Fields_DEFINED)
#include <Modloader/app/structs/XmlBaseConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlBaseConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlListConverter__Fields_DEFINED
struct XmlValueConverter;
struct XmlListConverter__Fields {
    struct XmlBaseConverter__Fields _;
    struct XmlValueConverter* atomicConverter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlListConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlListConverter__Fields_FWDDECL
#include <Modloader/app/structs/XmlValueConverter.h>
#endif
#undef IL2CPP_STRUCT_XmlListConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlListConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlListConverter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlListConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlListConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
