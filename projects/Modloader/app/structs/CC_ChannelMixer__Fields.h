#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_ChannelMixer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_ChannelMixer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_ChannelMixer__Fields_DEFINED)
#include <Modloader/app/structs/CC_Base__Fields.h>
#if defined(IL2CPP_STRUCT_CC_Base__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_ChannelMixer__Fields_DEFINED
struct CC_ChannelMixer__Fields {
    struct CC_Base__Fields _;
    float redR;
    float redG;
    float redB;
    float greenR;
    float greenG;
    float greenB;
    float blueR;
    float blueG;
    float blueB;
    float constantR;
    float constantG;
    float constantB;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_ChannelMixer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CC_ChannelMixer__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CC_ChannelMixer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_ChannelMixer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CC_ChannelMixer__Fields_FWDDECL)
#include <Modloader/app/structs/CC_ChannelMixer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_ChannelMixer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
