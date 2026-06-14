#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityCinematicData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityCinematicData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCinematicData__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#if defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_EntityCinematicData__Fields_DEFINED
struct MoonAnimation;
struct __declspec(align(8)) EntityCinematicData__Fields {
    struct ActiveAnimationHandle m_activeAnimation;
    struct MoonAnimation* _Animation_k__BackingField;
    bool _Scheduled_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityCinematicData__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityCinematicData__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_EntityCinematicData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCinematicData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityCinematicData__Fields_FWDDECL)
#include <Modloader/app/structs/EntityCinematicData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityCinematicData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
