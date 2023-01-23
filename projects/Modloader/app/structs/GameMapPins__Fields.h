#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapPins__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapPins__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_GameMapPins__Fields_DEFINED
struct Transform;
struct GameObject;
struct PlayerUberStateDescriptor;
struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_;
struct GameMapPins__Fields {
    struct GuidOwner__Fields _;
    float PinCursorSnapDistnace;
    struct Transform* MapPinHolder;
    struct GameObject* RedPinPrefab;
    struct GameObject* BluePinPrefab;
    struct GameObject* GreenPinPrefab;
    struct GameObject* YellowPinPrefab;
    struct GameObject* PlacePinEffect;
    struct PlayerUberStateDescriptor* PlayerUberState;
    struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_* m_colorDictionary;
    bool _ApplyOnEditor_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapPins__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameMapPins__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GameMapPins__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapPins__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameMapPins__Fields_FWDDECL)
#include <Modloader/app/structs/GameMapPins__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapPins__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
