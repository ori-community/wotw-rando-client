#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventPipelineKey__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventPipelineKey__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventPipelineKey__Enum_DEFINED)
#define IL2CPP_STRUCT_EventPipelineKey__Enum_DEFINED
enum class EventPipelineKey__Enum : int32_t {
    PlayFab = 0x00000000,
    OneDS = 0x00000001,
};
#endif
#if !defined(IL2CPP_STRUCT_EventPipelineKey__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventPipelineKey__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventPipelineKey__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventPipelineKey__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventPipelineKey__Enum_FWDDECL)
#include <Modloader/app/structs/EventPipelineKey__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventPipelineKey__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
