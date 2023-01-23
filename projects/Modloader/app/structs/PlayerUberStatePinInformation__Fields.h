#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_DEFINED
struct Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_;
struct List_1_GameMapPins_Pin_;
struct Action;
struct __declspec(align(8)) PlayerUberStatePinInformation__Fields {
    struct Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_* PinDictionary;
    struct List_1_GameMapPins_Pin_* m_pins;
    struct Action* m_setDirtyCallback;
    bool m_pinFoldout;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_GameMapPins_PinColour_GameMapPins_Pin_.h>
#include <Modloader/app/structs/List_1_GameMapPins_Pin_.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStatePinInformation__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStatePinInformation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStatePinInformation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
