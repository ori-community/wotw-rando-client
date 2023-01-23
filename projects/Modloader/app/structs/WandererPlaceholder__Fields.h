#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#include <Modloader/app/structs/WandererEntity_TokkTurningPattern__Enum.h>
#if defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_WandererEntity_TokkTurningPattern__Enum_DEFINED)
#define IL2CPP_STRUCT_WandererPlaceholder__Fields_DEFINED
struct WandererPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
    WandererEntity_TokkTurningPattern__Enum TurningPattern;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_WandererPlaceholder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WandererPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WandererPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/WandererPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
