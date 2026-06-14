#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_DEFINED)
#include <Modloader/app/structs/TimelineNode__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineNode__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_DEFINED
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct WeaponMasterIntroNode__Fields {
    struct TimelineNode__Fields _;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* InTreeIntro;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnGroundIntro;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#endif
#undef IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponMasterIntroNode__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponMasterIntroNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponMasterIntroNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
