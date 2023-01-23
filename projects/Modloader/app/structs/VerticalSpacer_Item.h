#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerticalSpacer_Item_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerticalSpacer_Item_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerticalSpacer_Item_DEFINED)
#define IL2CPP_STRUCT_VerticalSpacer_Item_DEFINED
struct Transform;
struct GameObject;
struct VerticalSpacer_Item {
    struct Transform* Anchor;
    struct GameObject* AlignableGO;
    float SpaceAbove;
    float SpaceBelow;
    bool SkipIfInactive;
};
#endif
#if !defined(IL2CPP_STRUCT_VerticalSpacer_Item_FWDDECL)
#define IL2CPP_STRUCT_VerticalSpacer_Item_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_VerticalSpacer_Item_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerticalSpacer_Item_DEFINED) && !defined(IL2CPP_STRUCT_VerticalSpacer_Item_FWDDECL)
#include <Modloader/app/structs/VerticalSpacer_Item.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerticalSpacer_Item.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
