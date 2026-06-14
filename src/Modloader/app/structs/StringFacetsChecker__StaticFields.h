#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringFacetsChecker__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringFacetsChecker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringFacetsChecker__StaticFields_DEFINED)
#define IL2CPP_STRUCT_StringFacetsChecker__StaticFields_DEFINED
struct Regex;
struct StringFacetsChecker__StaticFields {
    struct Regex* languagePattern;
};
#endif
#if !defined(IL2CPP_STRUCT_StringFacetsChecker__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_StringFacetsChecker__StaticFields_FWDDECL
#include <Modloader/app/structs/Regex.h>
#endif
#undef IL2CPP_STRUCT_StringFacetsChecker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringFacetsChecker__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_StringFacetsChecker__StaticFields_FWDDECL)
#include <Modloader/app/structs/StringFacetsChecker__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringFacetsChecker__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
