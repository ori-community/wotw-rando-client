#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceMenuScreen__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceMenuScreen__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceMenuScreen__StaticFields_DEFINED)
#include <Modloader/app/structs/RaceManuPage__Enum.h>
#if defined(IL2CPP_STRUCT_RaceManuPage__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceMenuScreen__StaticFields_DEFINED
struct RaceMenuScreen;
struct RaceMenuScreen__StaticFields {
    RaceManuPage__Enum CurrentRaceFilter;

    struct RaceMenuScreen* Instance;
    int32_t m_lastSelectedSlotIndex;
    int32_t m_lastSelectedRaceIndex;
    int32_t m_lastSelectedMemoryIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceMenuScreen__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RaceMenuScreen__StaticFields_FWDDECL
#include <Modloader/app/structs/RaceMenuScreen.h>
#endif
#undef IL2CPP_STRUCT_RaceMenuScreen__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceMenuScreen__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RaceMenuScreen__StaticFields_FWDDECL)
#include <Modloader/app/structs/RaceMenuScreen__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceMenuScreen__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
