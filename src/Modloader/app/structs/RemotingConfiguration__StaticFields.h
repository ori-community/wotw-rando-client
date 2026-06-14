#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingConfiguration__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingConfiguration__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingConfiguration__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RemotingConfiguration__StaticFields_DEFINED
struct String;
struct Hashtable;
struct RemotingConfiguration__StaticFields {
    struct String* applicationID;
    struct String* applicationName;
    struct String* processGuid;
    bool defaultConfigRead;
    bool defaultDelayedConfigRead;
    struct String* _errorMode;
    struct Hashtable* wellKnownClientEntries;
    struct Hashtable* activatedClientEntries;
    struct Hashtable* wellKnownServiceEntries;
    struct Hashtable* activatedServiceEntries;
    struct Hashtable* channelTemplates;
    struct Hashtable* clientProviderTemplates;
    struct Hashtable* serverProviderTemplates;
};
#endif
#if !defined(IL2CPP_STRUCT_RemotingConfiguration__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RemotingConfiguration__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RemotingConfiguration__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingConfiguration__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RemotingConfiguration__StaticFields_FWDDECL)
#include <Modloader/app/structs/RemotingConfiguration__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingConfiguration__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
