#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFString__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFString__Fields_DEFINED)
#include <Modloader/app/structs/CFObject__Fields.h>
#if defined(IL2CPP_STRUCT_CFObject__Fields_DEFINED)
#define IL2CPP_STRUCT_CFString__Fields_DEFINED
struct String;
struct CFString__Fields {
    struct CFObject__Fields _;
    struct String* str;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CFString__Fields_FWDDECL)
#define IL2CPP_STRUCT_CFString__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CFString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFString__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CFString__Fields_FWDDECL)
#include <Modloader/app/structs/CFString__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFString__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
