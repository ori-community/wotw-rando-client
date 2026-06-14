#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_DEFINED)
#include <Modloader/app/structs/AzureRegion__Enum.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_AzureRegion__Enum_DEFINED)
#define IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_DEFINED
struct String;
struct ListMultiplayerServersRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* BuildId;
    struct Nullable_1_Int32_ PageSize;
    AzureRegion__Enum Region_1;

    struct String* SkipToken;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_FWDDECL)
#include <Modloader/app/structs/ListMultiplayerServersRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListMultiplayerServersRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
