#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClearSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClearSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClearSettings_DEFINED)
#include <Modloader/app/structs/ClearFlags__Enum.h>
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_ClearFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ClearSettings_DEFINED
struct ClearSettings {
    ClearFlags__Enum flags;

    struct Color color;
    float depth;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClearSettings_FWDDECL)
#define IL2CPP_STRUCT_ClearSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_ClearSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClearSettings_DEFINED) && !defined(IL2CPP_STRUCT_ClearSettings_FWDDECL)
#include <Modloader/app/structs/ClearSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClearSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
