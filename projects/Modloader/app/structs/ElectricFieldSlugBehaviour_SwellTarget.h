#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_DEFINED)
#define IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_DEFINED
struct Transform;
struct ElectricFieldSlugBehaviour_SwellTarget {
    struct Transform* Target;
    float MaxScale;
};
#endif
#if !defined(IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_FWDDECL)
#define IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_DEFINED) && !defined(IL2CPP_STRUCT_ElectricFieldSlugBehaviour_SwellTarget_FWDDECL)
#include <Modloader/app/structs/ElectricFieldSlugBehaviour_SwellTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElectricFieldSlugBehaviour_SwellTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
