#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelSwapper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelSwapper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelSwapper__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ChannelSwapper__StaticFields_DEFINED
struct Vector4__Array;
struct ChannelSwapper__StaticFields {
    struct Vector4__Array* m_Channels;
};
#endif
#if !defined(IL2CPP_STRUCT_ChannelSwapper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ChannelSwapper__StaticFields_FWDDECL
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_ChannelSwapper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelSwapper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ChannelSwapper__StaticFields_FWDDECL)
#include <Modloader/app/structs/ChannelSwapper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelSwapper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
