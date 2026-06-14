#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_DEFINED)
#include <Modloader/app/structs/AlphaBlendModeEntity_AlphaBlendTargetType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_AlphaBlendModeEntity_AlphaBlendTargetType__Enum_DEFINED)
#define IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_DEFINED
struct MoonReference_1_IAlphaBlendModeController_;
struct SeinController3D;
struct IAlphaBlendModeController;
struct AlphaBlendModeEntity__Fields {
    struct TimelineEntity__Fields _;
    AlphaBlendModeEntity_AlphaBlendTargetType__Enum TargetType;

    struct MoonReference_1_IAlphaBlendModeController_* Target;
    struct SeinController3D* m_seinController3D;
    struct IAlphaBlendModeController* m_resolvedGenericTarget;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_FWDDECL
#include <Modloader/app/structs/IAlphaBlendModeController.h>
#include <Modloader/app/structs/MoonReference_1_IAlphaBlendModeController_.h>
#include <Modloader/app/structs/SeinController3D.h>
#endif
#undef IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AlphaBlendModeEntity__Fields_FWDDECL)
#include <Modloader/app/structs/AlphaBlendModeEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlphaBlendModeEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
