#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/RespawningPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_RespawningPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_CartPlaceholder__Fields_DEFINED
struct CartPlaceholder_CartPlaceholderSettings;
struct GameObject;
struct Renderer;
struct Collider__Array;
struct Cart;
struct CartSet;
struct CartPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct CartPlaceholder_CartPlaceholderSettings* Settings;
    struct GameObject* CartObject;
    struct GameObject* SpawnEffect;
    struct LayerMask CartLayer;
    bool startEmpty;
    struct Renderer* m_renderer;
    struct Collider__Array* m_colliderCheck;
    struct Cart* m_activeCart;
    struct CartSet* m_mySet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/CartPlaceholder_CartPlaceholderSettings.h>
#include <Modloader/app/structs/CartSet.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_CartPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/CartPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
