#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEntityProfileRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEntityProfileRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfileRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_GetEntityProfileRequest__Fields_DEFINED
struct EntityKey_7;
struct GetEntityProfileRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct Nullable_1_Boolean_ DataAsObject;
    struct EntityKey_7* Entity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEntityProfileRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetEntityProfileRequest__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_7.h>
#endif
#undef IL2CPP_STRUCT_GetEntityProfileRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfileRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetEntityProfileRequest__Fields_FWDDECL)
#include <Modloader/app/structs/GetEntityProfileRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEntityProfileRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
