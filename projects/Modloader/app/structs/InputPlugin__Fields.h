#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputPlugin__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_InputPlugin__Fields_DEFINED
struct InputData;
struct AnalogueInputData;
struct CursorInputData;
struct InputPlugin__Fields {
    struct MonoBehaviour__Fields _;
    struct InputData* m_inputData;
    struct AnalogueInputData* m_analogueInputData;
    struct CursorInputData* m_cursorInputData;
    bool m_cursorMoved;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_InputPlugin__Fields_FWDDECL
#include <Modloader/app/structs/AnalogueInputData.h>
#include <Modloader/app/structs/CursorInputData.h>
#include <Modloader/app/structs/InputData.h>
#endif
#undef IL2CPP_STRUCT_InputPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InputPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/InputPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
