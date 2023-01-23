#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMACSHA384__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMACSHA384__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACSHA384__Fields_DEFINED)
#include <Modloader/app/structs/HMAC__Fields.h>
#if defined(IL2CPP_STRUCT_HMAC__Fields_DEFINED)
#define IL2CPP_STRUCT_HMACSHA384__Fields_DEFINED
struct HMACSHA384__Fields {
    struct HMAC__Fields _;
    bool m_useLegacyBlockSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMACSHA384__Fields_FWDDECL)
#define IL2CPP_STRUCT_HMACSHA384__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_HMACSHA384__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMACSHA384__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HMACSHA384__Fields_FWDDECL)
#include <Modloader/app/structs/HMACSHA384__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMACSHA384__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
