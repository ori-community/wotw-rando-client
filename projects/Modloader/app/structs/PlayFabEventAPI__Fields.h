#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEventAPI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEventAPI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventAPI__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEventAPI__Fields_DEFINED
struct IPlayFabEventRouter;
struct __declspec(align(8)) PlayFabEventAPI__Fields {
    struct IPlayFabEventRouter* _EventRouter_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEventAPI__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEventAPI__Fields_FWDDECL
#include <Modloader/app/structs/IPlayFabEventRouter.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEventAPI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventAPI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEventAPI__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabEventAPI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEventAPI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
