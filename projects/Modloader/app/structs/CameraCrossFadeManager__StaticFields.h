#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_DEFINED
struct MoonGuid;
struct CameraCrossFadeManager__StaticFields {
    struct MoonGuid* CrossFadeMenuHack;
};
#endif
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_FWDDECL
#include <Modloader/app/structs/MoonGuid.h>
#endif
#undef IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CameraCrossFadeManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/CameraCrossFadeManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraCrossFadeManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
