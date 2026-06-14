#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAttribute__Fields_DEFINED)
#include <Modloader/app/structs/XObject__Fields.h>
#if defined(IL2CPP_STRUCT_XObject__Fields_DEFINED)
#define IL2CPP_STRUCT_XAttribute__Fields_DEFINED
struct XAttribute;
struct XName;
struct String;
struct XAttribute__Fields {
    struct XObject__Fields _;
    struct XAttribute* next;
    struct XName* name;
    struct String* value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_XAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XAttribute.h>
#include <Modloader/app/structs/XName.h>
#endif
#undef IL2CPP_STRUCT_XAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/XAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
