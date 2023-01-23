#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_EventAttributes__Enum_DEFINED
enum class EventAttributes__Enum : int32_t {
    None = 0x00000000,
    SpecialName = 0x00000200,
    ReservedMask = 0x00000400,
    RTSpecialName = 0x00000400,
};
#endif
#if !defined(IL2CPP_STRUCT_EventAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/EventAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
