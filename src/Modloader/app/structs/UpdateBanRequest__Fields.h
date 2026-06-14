#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateBanRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateBanRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBanRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_UpdateBanRequest__Fields_DEFINED
struct String;
struct UpdateBanRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Boolean_ Active;
    struct String* BanId;
    struct Nullable_1_DateTime_ Expires;
    struct String* IPAddress;
    struct String* MACAddress;
    struct Nullable_1_Boolean_ Permanent;
    struct String* Reason;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateBanRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateBanRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UpdateBanRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBanRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateBanRequest__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateBanRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateBanRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
