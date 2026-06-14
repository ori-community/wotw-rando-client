#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Marker__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Marker__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Marker__Enum_DEFINED)
#define IL2CPP_STRUCT_Marker__Enum_DEFINED
enum class Marker__Enum : int32_t {
    SceneStreaming = 0x00000000,
    Timeslicing = 0x00000001,
    ShaderPrewarm = 0x00000002,
    PoolingPrewarm = 0x00000003,
    AudioPrewarm = 0x00000004,
    LoadIntro = 0x00000005,
    AsyncUpload = 0x00000006,
    Custom = 0x00000007,
    Count = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_Marker__Enum_FWDDECL)
#define IL2CPP_STRUCT_Marker__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Marker__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Marker__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Marker__Enum_FWDDECL)
#include <Modloader/app/structs/Marker__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Marker__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
