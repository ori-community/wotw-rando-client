#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmotionType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmotionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmotionType__Enum_DEFINED)
#define IL2CPP_STRUCT_EmotionType__Enum_DEFINED
enum class EmotionType__Enum : int32_t {
    Neutral = 0x00000000,
    Happy = 0x00000001,
    Sad = 0x00000002,
    Scared = 0x00000003,
    Urgent = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_EmotionType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EmotionType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EmotionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmotionType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EmotionType__Enum_FWDDECL)
#include <Modloader/app/structs/EmotionType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmotionType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
