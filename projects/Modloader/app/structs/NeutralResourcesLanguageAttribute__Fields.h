#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_DEFINED)
#include <Modloader/app/structs/UltimateResourceFallbackLocation__Enum.h>
#if defined(IL2CPP_STRUCT_UltimateResourceFallbackLocation__Enum_DEFINED)
#define IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) NeutralResourcesLanguageAttribute__Fields {
    struct String* _culture;
    UltimateResourceFallbackLocation__Enum _fallbackLoc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NeutralResourcesLanguageAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/NeutralResourcesLanguageAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NeutralResourcesLanguageAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
