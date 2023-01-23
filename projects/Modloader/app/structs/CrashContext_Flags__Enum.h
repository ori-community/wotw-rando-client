#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrashContext_Flags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrashContext_Flags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_Flags__Enum_DEFINED)
#define IL2CPP_STRUCT_CrashContext_Flags__Enum_DEFINED
enum class CrashContext_Flags__Enum : uint32_t {
    Automation = 0x00000001,
    IsDoingCleanup = 0x00000002,
    IsHandheld = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_CrashContext_Flags__Enum_FWDDECL)
#define IL2CPP_STRUCT_CrashContext_Flags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CrashContext_Flags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_Flags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CrashContext_Flags__Enum_FWDDECL)
#include <Modloader/app/structs/CrashContext_Flags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrashContext_Flags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
