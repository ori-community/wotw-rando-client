#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifyItemUsesResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifyItemUsesResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifyItemUsesResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_ModifyItemUsesResult__Fields_DEFINED
struct String;
struct ModifyItemUsesResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String* ItemInstanceId;
    int32_t RemainingUses;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModifyItemUsesResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_ModifyItemUsesResult__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ModifyItemUsesResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifyItemUsesResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ModifyItemUsesResult__Fields_FWDDECL)
#include <Modloader/app/structs/ModifyItemUsesResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifyItemUsesResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
