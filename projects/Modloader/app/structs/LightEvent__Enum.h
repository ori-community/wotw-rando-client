#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightEvent__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightEvent__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightEvent__Enum_DEFINED)
#define IL2CPP_STRUCT_LightEvent__Enum_DEFINED
enum class LightEvent__Enum : int32_t {
    BeforeShadowMap = 0x00000000,
    AfterShadowMap = 0x00000001,
    BeforeScreenspaceMask = 0x00000002,
    AfterScreenspaceMask = 0x00000003,
    BeforeShadowMapPass = 0x00000004,
    AfterShadowMapPass = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_LightEvent__Enum_FWDDECL)
#define IL2CPP_STRUCT_LightEvent__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LightEvent__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightEvent__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LightEvent__Enum_FWDDECL)
#include <Modloader/app/structs/LightEvent__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightEvent__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
