#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeatUpPlatformAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeatUpPlatformAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeatUpPlatformAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/HeatUpPlatformAction_HeatupPlatformMethod__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_HeatUpPlatformAction_HeatupPlatformMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_HeatUpPlatformAction__Fields_DEFINED
struct GameObject;
struct HeatUpPlatformAction__Fields {
    struct ActionMethod__Fields _;
    struct GameObject* HeatUpPlatform;
    HeatUpPlatformAction_HeatupPlatformMethod__Enum Method;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeatUpPlatformAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_HeatUpPlatformAction__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_HeatUpPlatformAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeatUpPlatformAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HeatUpPlatformAction__Fields_FWDDECL)
#include <Modloader/app/structs/HeatUpPlatformAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeatUpPlatformAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
