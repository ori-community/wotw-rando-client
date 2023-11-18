#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelMixer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelMixer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelMixer__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ChannelMixer__Fields_DEFINED
struct ChannelMixer__Fields {
    struct BaseEffect__Fields _;
    struct Vector3 Red;
    struct Vector3 Green;
    struct Vector3 Blue;
    struct Vector3 Constant;
    int32_t e_CurrentChannel;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChannelMixer__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChannelMixer__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ChannelMixer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelMixer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChannelMixer__Fields_FWDDECL)
#include <Modloader/app/structs/ChannelMixer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelMixer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
