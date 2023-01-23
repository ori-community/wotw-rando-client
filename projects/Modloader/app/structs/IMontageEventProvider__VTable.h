#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMontageEventProvider__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMontageEventProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMontageEventProvider__VTable_DEFINED)
#define IL2CPP_STRUCT_IMontageEventProvider__VTable_DEFINED
struct IMontageEventProvider__VTable {
    VirtualInvokeData get_EventProviderName;
    VirtualInvokeData get_EventStart;
    VirtualInvokeData set_EventStart;
    VirtualInvokeData get_EventStay;
    VirtualInvokeData set_EventStay;
    VirtualInvokeData get_EventEnd;
    VirtualInvokeData set_EventEnd;
};
#endif
#if !defined(IL2CPP_STRUCT_IMontageEventProvider__VTable_FWDDECL)
#define IL2CPP_STRUCT_IMontageEventProvider__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IMontageEventProvider__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMontageEventProvider__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IMontageEventProvider__VTable_FWDDECL)
#include <Modloader/app/structs/IMontageEventProvider__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMontageEventProvider__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
