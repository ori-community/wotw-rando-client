#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapStone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapStone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapStone__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MapStone_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_MapStone_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MapStone__Fields_DEFINED
struct Transform;
struct GameWorldArea;
struct Texture2D;
struct MessageProvider;
struct MessageBox;
struct ActionMethod;
struct MapStone__Fields {
    struct SaveSerialize__Fields _;
    struct Transform* OriTarget;
    struct Color OriHoverColor;
    float Radius;
    struct Transform* m_transform;
    struct GameWorldArea* WorldArea;
    struct Texture2D* HintTexture;
    struct MessageProvider* HintMessage;
    struct MessageBox* m_hint;
    struct ActionMethod* OriEnterAction;
    struct ActionMethod* OriExitAction;
    struct ActionMethod* OnOpenedAction;
    struct ActionMethod* OnFailAction;
    float OriDuration;
    MapStone_State__Enum CurrentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapStone__Fields_FWDDECL)
#define IL2CPP_STRUCT_MapStone__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MapStone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapStone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MapStone__Fields_FWDDECL)
#include <Modloader/app/structs/MapStone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapStone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
