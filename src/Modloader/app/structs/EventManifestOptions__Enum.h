#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventManifestOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventManifestOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventManifestOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_EventManifestOptions__Enum_DEFINED
enum class EventManifestOptions__Enum : int32_t {
    None = 0x00000000,
    Strict = 0x00000001,
    AllCultures = 0x00000002,
    OnlyIfNeededForRegistration = 0x00000004,
    AllowEventSourceOverride = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_EventManifestOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventManifestOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventManifestOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventManifestOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventManifestOptions__Enum_FWDDECL)
#include <Modloader/app/structs/EventManifestOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventManifestOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
