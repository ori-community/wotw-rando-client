#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChannelServices__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChannelServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelServices__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ChannelServices__StaticFields_DEFINED
struct ArrayList;
struct CrossContextChannel;
struct String;
struct IList;
struct ChannelServices__StaticFields {
    struct ArrayList* registeredChannels;
    struct ArrayList* delayedClientChannels;
    struct CrossContextChannel* _crossContextSink;
    struct String* CrossContextUrl;
    struct IList* oldStartModeTypes;
};
#endif
#if !defined(IL2CPP_STRUCT_ChannelServices__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ChannelServices__StaticFields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CrossContextChannel.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ChannelServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChannelServices__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ChannelServices__StaticFields_FWDDECL)
#include <Modloader/app/structs/ChannelServices__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChannelServices__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
