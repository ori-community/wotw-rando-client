#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BanInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BanInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanInfo__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_BanInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) BanInfo__Fields {
    bool Active;
    struct String* BanId;
    struct Nullable_1_DateTime_ Created;
    struct Nullable_1_DateTime_ Expires;
    struct String* IPAddress;
    struct String* MACAddress;
    struct String* PlayFabId;
    struct String* Reason;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BanInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_BanInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BanInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BanInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BanInfo__Fields_FWDDECL)
#include <Modloader/app/structs/BanInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BanInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
