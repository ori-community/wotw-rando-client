#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabException__Fields_DEFINED)
#include <Modloader/app/structs/Exception__Fields.h>
#include <Modloader/app/structs/PlayFabExceptionCode__Enum.h>
#if defined(IL2CPP_STRUCT_Exception__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayFabExceptionCode__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabException__Fields_DEFINED
struct PlayFabException__Fields {
    struct Exception__Fields _;
    PlayFabExceptionCode__Enum Code;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabException__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabException__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PlayFabException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabException__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
