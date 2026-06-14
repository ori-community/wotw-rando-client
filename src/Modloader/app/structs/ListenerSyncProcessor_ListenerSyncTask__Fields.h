#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_DEFINED)
#include <Modloader/app/structs/SoundListenerReference.h>
#if defined(IL2CPP_STRUCT_SoundListenerReference_DEFINED)
#define IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_DEFINED
struct __declspec(align(8)) ListenerSyncProcessor_ListenerSyncTask__Fields {
    int32_t Id;
    int32_t _FrameQuantinization_k__BackingField;
    struct SoundListenerReference _Listener_k__BackingField;
    bool _IsInitialized_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListenerSyncProcessor_ListenerSyncTask__Fields_FWDDECL)
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
