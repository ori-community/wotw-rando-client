#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLocation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLocation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLocation__Fields_DEFINED)
#include <Modloader/app/structs/ContinentCode__Enum_1.h>
#include <Modloader/app/structs/CountryCode__Enum_1.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#if defined(IL2CPP_STRUCT_ContinentCode__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_CountryCode__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Double__DEFINED)
#define IL2CPP_STRUCT_PlayerLocation__Fields_DEFINED
struct String;
struct __declspec(align(8)) PlayerLocation__Fields {
    struct String* City;
    ContinentCode__Enum_1 ContinentCode;

    CountryCode__Enum_1 CountryCode;

    struct Nullable_1_Double_ Latitude;
    struct Nullable_1_Double_ Longitude;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLocation__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerLocation__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerLocation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLocation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLocation__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerLocation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLocation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
