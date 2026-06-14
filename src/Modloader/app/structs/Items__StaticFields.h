#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Items__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Items__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Items__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Items__StaticFields_DEFINED
struct NightBerry;
struct MistTorch;
struct LightTorch;
struct AllContainer_1_ICarryable_;
struct AllContainer_1_IHoldable_;
struct Items__StaticFields {
    struct NightBerry* NightBerry;
    struct MistTorch* MistTorch;
    struct LightTorch* LightTorch;
    struct AllContainer_1_ICarryable_* Carryables;
    struct AllContainer_1_IHoldable_* Holdables;
};
#endif
#if !defined(IL2CPP_STRUCT_Items__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Items__StaticFields_FWDDECL
#include <Modloader/app/structs/AllContainer_1_ICarryable_.h>
#include <Modloader/app/structs/AllContainer_1_IHoldable_.h>
#include <Modloader/app/structs/LightTorch.h>
#include <Modloader/app/structs/MistTorch.h>
#include <Modloader/app/structs/NightBerry.h>
#endif
#undef IL2CPP_STRUCT_Items__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Items__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Items__StaticFields_FWDDECL)
#include <Modloader/app/structs/Items__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Items__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
