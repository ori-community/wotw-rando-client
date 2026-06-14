#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpriteState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpriteState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteState_DEFINED)
#define IL2CPP_STRUCT_SpriteState_DEFINED
struct Sprite;
struct SpriteState {
    struct Sprite* m_HighlightedSprite;
    struct Sprite* m_PressedSprite;
    struct Sprite* m_DisabledSprite;
};
#endif
#if !defined(IL2CPP_STRUCT_SpriteState_FWDDECL)
#define IL2CPP_STRUCT_SpriteState_FWDDECL
#include <Modloader/app/structs/Sprite.h>
#endif
#undef IL2CPP_STRUCT_SpriteState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpriteState_DEFINED) && !defined(IL2CPP_STRUCT_SpriteState_FWDDECL)
#include <Modloader/app/structs/SpriteState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpriteState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
