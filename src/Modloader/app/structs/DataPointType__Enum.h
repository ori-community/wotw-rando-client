#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataPointType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataPointType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataPointType__Enum_DEFINED)
#define IL2CPP_STRUCT_DataPointType__Enum_DEFINED
enum class DataPointType__Enum : int32_t {
    Heartbeat = 0x00000000,
    Damage = 0x00000001,
    Death = 0x00000002,
    MinFPS = 0x00000004,
    AvgFPS = 0x00000005,
    MaxFPS = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_DataPointType__Enum_FWDDECL)
#define IL2CPP_STRUCT_DataPointType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DataPointType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataPointType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DataPointType__Enum_FWDDECL)
#include <Modloader/app/structs/DataPointType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataPointType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
