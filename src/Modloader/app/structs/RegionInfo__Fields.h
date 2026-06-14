#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegionInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_RegionInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) RegionInfo__Fields {
    int32_t regionId;
    struct String* iso2Name;
    struct String* iso3Name;
    struct String* win3Name;
    struct String* englishName;
    struct String* nativeName;
    struct String* currencySymbol;
    struct String* isoCurrencySymbol;
    struct String* currencyEnglishName;
    struct String* currencyNativeName;
};
#endif
#if !defined(IL2CPP_STRUCT_RegionInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_RegionInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RegionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RegionInfo__Fields_FWDDECL)
#include <Modloader/app/structs/RegionInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegionInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
