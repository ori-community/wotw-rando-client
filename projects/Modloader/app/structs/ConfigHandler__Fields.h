#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ConfigHandler__Fields_DEFINED
struct ArrayList;
struct ChannelData;
struct Stack;
struct String;
struct __declspec(align(8)) ConfigHandler__Fields {
    struct ArrayList* typeEntries;
    struct ArrayList* channelInstances;
    struct ChannelData* currentChannel;
    struct Stack* currentProviderData;
    struct String* currentClientUrl;
    struct String* appName;
    struct String* currentXmlPath;
    bool onlyDelayedChannels;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfigHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConfigHandler__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ChannelData.h>
#include <Modloader/app/structs/Stack.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ConfigHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConfigHandler__Fields_FWDDECL)
#include <Modloader/app/structs/ConfigHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
