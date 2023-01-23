#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_DEFINED
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet;
struct __declspec(align(8)) CartPlaceholder_CartPlaceholderSettings__Fields {
    float MaxEnterDistance;
    float FlipDistance;
    float MaxSpeed;
    float Acceleration;
    float Decceleration;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* SlopeDownMaxMultiplier;
    float SlopeDownMaxAngle;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* SlopeUpMaxMultiplier;
    float SlopeUpMaxAngle;
};
#endif
#if !defined(IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_FWDDECL
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#endif
#undef IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartPlaceholder_CartPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/CartPlaceholder_CartPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartPlaceholder_CartPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
