#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_DEFINED
struct SeinSpiritLeashAbility__StaticFields {
    bool m_groundMaskInitialized;
    struct LayerMask m_groundMask;
    float SphereCastRadius;
    bool OptimizeSpiritLeash;
    bool UseCastManager;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility__StaticFields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritLeashAbility__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritLeashAbility__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
