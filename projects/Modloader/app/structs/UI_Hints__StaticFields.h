#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UI_Hints__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UI_Hints__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_Hints__StaticFields_DEFINED)
#include <Modloader/app/structs/HintLayer__Enum.h>
#if defined(IL2CPP_STRUCT_HintLayer__Enum_DEFINED)
#define IL2CPP_STRUCT_UI_Hints__StaticFields_DEFINED
struct MessageBox;
struct UI_Hints__StaticFields {
    struct MessageBox* m_currentHint;
    HintLayer__Enum m_currentLayer;

    bool m_timelineShowingHint;
    bool m_showHints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UI_Hints__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UI_Hints__StaticFields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#endif
#undef IL2CPP_STRUCT_UI_Hints__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_Hints__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UI_Hints__StaticFields_FWDDECL)
#include <Modloader/app/structs/UI_Hints__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UI_Hints__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
