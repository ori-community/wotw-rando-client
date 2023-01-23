#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_DEFINED)
#define IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_DEFINED
enum class MixerSnapshot_MixerSnapshotState__Enum : int32_t {
    FadingIn = 0x00000000,
    FadingOut = 0x00000001,
    Inactive = 0x00000002,
    Active = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_FWDDECL)
#define IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MixerSnapshot_MixerSnapshotState__Enum_FWDDECL)
#include <Modloader/app/structs/MixerSnapshot_MixerSnapshotState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerSnapshot_MixerSnapshotState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
