#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_DEFINED
struct TextBox;
struct TextBox__Array;
struct UnityRaceTimerDisplay__Fields {
    struct MonoBehaviour__Fields _;
    struct TextBox* MiliHund;
    struct TextBox* MiliTen;
    struct TextBox* SecondTen;
    struct TextBox* SecondOne;
    struct TextBox* Minute;
    struct TextBox* ColonSec;
    struct TextBox* ColonMin;
    struct TextBox__Array* m_textBoxes;
    int32_t m_elapsedTimeCache;
    int32_t m_minutesCache;
    int32_t m_secondsOneCache;
    int32_t m_secondsTenCache;
    int32_t m_milisecondsTenCache;
    int32_t m_milisecondsHundredCache;
    bool m_colonsNeedRefreshing;
    bool m_isOn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_FWDDECL
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/TextBox__Array.h>
#endif
#undef IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnityRaceTimerDisplay__Fields_FWDDECL)
#include <Modloader/app/structs/UnityRaceTimerDisplay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityRaceTimerDisplay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
