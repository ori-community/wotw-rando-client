#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerExample__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerExample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerExample__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerExample__Fields_DEFINED
struct TextBox;
struct StringBuilder;
struct TimerExample__Fields {
    struct MonoBehaviour__Fields _;
    struct TextBox* timerBox;
    struct StringBuilder* timeText;
    int32_t textPrefixLength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerExample__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimerExample__Fields_FWDDECL
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TextBox.h>
#endif
#undef IL2CPP_STRUCT_TimerExample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerExample__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimerExample__Fields_FWDDECL)
#include <Modloader/app/structs/TimerExample__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerExample__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
