#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventOpcode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventOpcode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventOpcode__Enum_DEFINED)
#define IL2CPP_STRUCT_EventOpcode__Enum_DEFINED
enum class EventOpcode__Enum : int32_t {
    Info = 0x00000000,
    Start = 0x00000001,
    Stop = 0x00000002,
    DataCollectionStart = 0x00000003,
    DataCollectionStop = 0x00000004,
    Extension = 0x00000005,
    Reply = 0x00000006,
    Resume = 0x00000007,
    Suspend = 0x00000008,
    Send = 0x00000009,
    Receive = 0x000000f0,
};
#endif
#if !defined(IL2CPP_STRUCT_EventOpcode__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventOpcode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventOpcode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventOpcode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventOpcode__Enum_FWDDECL)
#include <Modloader/app/structs/EventOpcode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventOpcode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
