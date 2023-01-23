#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapSavePedestal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapSavePedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GameMapSavePedestal__Fields_DEFINED
struct String;
struct MessageProvider;
struct LegacyTransparencyAnimator;
struct Transform;
struct GameObject;
struct SavePedestalUberState;
struct IUberState__Array;
struct __declspec(align(8)) GameMapSavePedestal__Fields {
    struct String* Identifier;
    struct Vector3 WorldPosition;
    struct MessageProvider* Name;
    struct LegacyTransparencyAnimator* m_worldMapIconHighlightAnimator;
    struct Transform* m_worldMapIconTransform;
    struct GameObject* m_worldMapIconGameObject;
    struct LegacyTransparencyAnimator* m_areaMapIconHighlightAnimator;
    struct Transform* m_areaMapIconTransform;
    struct GameObject* m_areaMapIconGameObject;
    struct SavePedestalUberState* SeralizedState;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameMapSavePedestal__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SavePedestalUberState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GameMapSavePedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapSavePedestal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameMapSavePedestal__Fields_FWDDECL)
#include <Modloader/app/structs/GameMapSavePedestal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapSavePedestal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
