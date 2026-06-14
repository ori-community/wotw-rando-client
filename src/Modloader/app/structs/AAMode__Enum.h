#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AAMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AAMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AAMode__Enum_DEFINED)
#define IL2CPP_STRUCT_AAMode__Enum_DEFINED
enum class AAMode__Enum : int32_t {
    FXAA2 = 0x00000000,
    FXAA3Console = 0x00000001,
    FXAA1PresetA = 0x00000002,
    FXAA1PresetB = 0x00000003,
    NFAA = 0x00000004,
    SSAA = 0x00000005,
    DLAA = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_AAMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_AAMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AAMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AAMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AAMode__Enum_FWDDECL)
#include <Modloader/app/structs/AAMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AAMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
