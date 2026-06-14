#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_DEFINED
struct GenericServiceId;
struct RemoveGenericIDRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct GenericServiceId* GenericId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_FWDDECL
#include <Modloader/app/structs/GenericServiceId.h>
#endif
#undef IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RemoveGenericIDRequest__Fields_FWDDECL)
#include <Modloader/app/structs/RemoveGenericIDRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveGenericIDRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
