#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EUniverse__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EUniverse__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUniverse__Enum_DEFINED)
#define IL2CPP_STRUCT_EUniverse__Enum_DEFINED
enum class EUniverse__Enum : int32_t {
    k_EUniverseInvalid = 0x00000000,
    k_EUniversePublic = 0x00000001,
    k_EUniverseBeta = 0x00000002,
    k_EUniverseInternal = 0x00000003,
    k_EUniverseDev = 0x00000004,
    k_EUniverseMax = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_EUniverse__Enum_FWDDECL)
#define IL2CPP_STRUCT_EUniverse__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EUniverse__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUniverse__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EUniverse__Enum_FWDDECL)
#include <Modloader/app/structs/EUniverse__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EUniverse__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
