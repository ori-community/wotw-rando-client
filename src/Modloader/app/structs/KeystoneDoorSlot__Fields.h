#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeystoneDoorSlot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeystoneDoorSlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystoneDoorSlot__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_KeystoneDoorSlot__Fields_DEFINED
struct KeystoneDoorLogic;
struct AnimationCurve;
struct Renderer;
struct KeystoneDoorSlot__Fields {
    struct MonoBehaviour__Fields _;
    int32_t Index;
    struct KeystoneDoorLogic* DoorLogic;
    bool Activated;
    struct AnimationCurve* AlphaFadeCurve;
    float AnimationSpeed;
    struct Renderer* m_renderer;
    struct Color m_colorValue;
    float m_alphaTimer;
    bool m_stopAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeystoneDoorSlot__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeystoneDoorSlot__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/KeystoneDoorLogic.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_KeystoneDoorSlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystoneDoorSlot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeystoneDoorSlot__Fields_FWDDECL)
#include <Modloader/app/structs/KeystoneDoorSlot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeystoneDoorSlot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
