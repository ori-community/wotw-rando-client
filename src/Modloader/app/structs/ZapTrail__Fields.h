#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZapTrail__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZapTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZapTrail__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ZapTrail__Fields_DEFINED
struct MoonTrail;
struct Transform;
struct ZapTrail__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTrail* Trail;
    float LifeTime;
    struct Transform* m_endPosition;
    float m_timeLeft;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZapTrail__Fields_FWDDECL)
#define IL2CPP_STRUCT_ZapTrail__Fields_FWDDECL
#include <Modloader/app/structs/MoonTrail.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ZapTrail__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZapTrail__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ZapTrail__Fields_FWDDECL)
#include <Modloader/app/structs/ZapTrail__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZapTrail__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
