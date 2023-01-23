#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlUnionConverter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlUnionConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUnionConverter__Fields_DEFINED)
#include <Modloader/app/structs/XmlBaseConverter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlBaseConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlUnionConverter__Fields_DEFINED
struct XmlValueConverter__Array;
struct XmlUnionConverter__Fields {
    struct XmlBaseConverter__Fields _;
    struct XmlValueConverter__Array* converters;
    bool hasAtomicMember;
    bool hasListMember;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlUnionConverter__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlUnionConverter__Fields_FWDDECL
#include <Modloader/app/structs/XmlValueConverter__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlUnionConverter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlUnionConverter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlUnionConverter__Fields_FWDDECL)
#include <Modloader/app/structs/XmlUnionConverter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlUnionConverter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
