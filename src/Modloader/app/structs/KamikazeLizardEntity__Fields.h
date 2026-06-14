#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KamikazeLizardEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KamikazeLizardEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeLizardEntity__Fields_DEFINED)
#include <Modloader/app/structs/LizardEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LizardEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_KamikazeLizardEntity__Fields_DEFINED
struct RTPC;
struct KamikazeLizardEntity__Fields {
    struct LizardEntity__Fields _;
    struct RTPC* RollingGroundBounceVelocity;
    struct RTPC* RollingVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KamikazeLizardEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_KamikazeLizardEntity__Fields_FWDDECL
#include <Modloader/app/structs/RTPC.h>
#endif
#undef IL2CPP_STRUCT_KamikazeLizardEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeLizardEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KamikazeLizardEntity__Fields_FWDDECL)
#include <Modloader/app/structs/KamikazeLizardEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KamikazeLizardEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
