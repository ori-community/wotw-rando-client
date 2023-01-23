#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_DEFINED
struct GameObject;
struct MessageProvider;
struct SpiritShardUIShardFloatingTooltip__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 Offset;
    struct GameObject* AnchorObject;
    struct GameObject* AmountGO;
    struct MessageProvider* XpFormatMessage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardUIShardFloatingTooltip__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardUIShardFloatingTooltip__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardUIShardFloatingTooltip__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
