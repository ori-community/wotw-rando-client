#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterControl__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterControl__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl__StaticFields_DEFINED)
#include <Modloader/app/structs/UberWaterControl_VisualDebugMode__Enum.h>
#if defined(IL2CPP_STRUCT_UberWaterControl_VisualDebugMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UberWaterControl__StaticFields_DEFINED
struct List_1_UberWaterControl_SplashInfo_;
struct AllContainer_1_UberWaterControl_;
struct Color__Array;
struct UberWaterControl__StaticFields {
    bool m_hasPlayerInterationActorId;
    int32_t m_playerInterationActorId;
    struct List_1_UberWaterControl_SplashInfo_* s_splashes;
    bool UseLowerDtClamp;
    struct AllContainer_1_UberWaterControl_* All;
    int64_t _WaterControllVersion_k__BackingField;
    UberWaterControl_VisualDebugMode__Enum s_visualDebugMode;

    bool visualDebugFlickerOnRender;
    struct Color__Array* groupColors;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterControl__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterControl__StaticFields_FWDDECL
#include <Modloader/app/structs/AllContainer_1_UberWaterControl_.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/List_1_UberWaterControl_SplashInfo_.h>
#endif
#undef IL2CPP_STRUCT_UberWaterControl__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterControl__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberWaterControl__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterControl__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
