#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventHistoryItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventHistoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHistoryItem_DEFINED)
#define IL2CPP_STRUCT_EventHistoryItem_DEFINED
struct EventHistoryItem {
    float Time;
    int32_t Frame;
    float GlobalTime;
};
#endif
#if !defined(IL2CPP_STRUCT_EventHistoryItem_FWDDECL)
#define IL2CPP_STRUCT_EventHistoryItem_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventHistoryItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventHistoryItem_DEFINED) && !defined(IL2CPP_STRUCT_EventHistoryItem_FWDDECL)
#include <Modloader/app/structs/EventHistoryItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventHistoryItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
