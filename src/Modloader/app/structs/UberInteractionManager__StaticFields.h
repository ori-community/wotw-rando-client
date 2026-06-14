#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberInteractionManager__StaticFields_DEFINED
struct UberInteractionManager;
struct UberInteractionManager__StaticFields {
    struct UberInteractionManager* Instance;
    bool UseAccelerationStructure;
    bool EnableExplosionSorting;
};
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionManager__StaticFields_FWDDECL
#include <Modloader/app/structs/UberInteractionManager.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberInteractionManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
