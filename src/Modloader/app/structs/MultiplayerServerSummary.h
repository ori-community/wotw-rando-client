#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplayerServerSummary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplayerServerSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerSummary_DEFINED)
#include <Modloader/app/structs/MultiplayerServerSummary__Fields.h>
#if defined(IL2CPP_STRUCT_MultiplayerServerSummary__Fields_DEFINED)
#define IL2CPP_STRUCT_MultiplayerServerSummary_DEFINED
struct MultiplayerServerSummary__Class;
struct MultiplayerServerSummary {
    struct MultiplayerServerSummary__Class* klass;
    MonitorData* monitor;
    struct MultiplayerServerSummary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplayerServerSummary_FWDDECL)
#define IL2CPP_STRUCT_MultiplayerServerSummary_FWDDECL
#include <Modloader/app/structs/MultiplayerServerSummary__Class.h>
#endif
#undef IL2CPP_STRUCT_MultiplayerServerSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplayerServerSummary_DEFINED) && !defined(IL2CPP_STRUCT_MultiplayerServerSummary_FWDDECL)
#include <Modloader/app/structs/MultiplayerServerSummary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplayerServerSummary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
