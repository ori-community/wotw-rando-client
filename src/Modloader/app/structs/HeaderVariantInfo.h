#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderVariantInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderVariantInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderVariantInfo_DEFINED)
#include <Modloader/app/structs/CookieVariant__Enum.h>
#if defined(IL2CPP_STRUCT_CookieVariant__Enum_DEFINED)
#define IL2CPP_STRUCT_HeaderVariantInfo_DEFINED
struct String;
struct HeaderVariantInfo {
    struct String* m_name;
    CookieVariant__Enum m_variant;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeaderVariantInfo_FWDDECL)
#define IL2CPP_STRUCT_HeaderVariantInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HeaderVariantInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderVariantInfo_DEFINED) && !defined(IL2CPP_STRUCT_HeaderVariantInfo_FWDDECL)
#include <Modloader/app/structs/HeaderVariantInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderVariantInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
