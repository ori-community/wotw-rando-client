#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RacesUiService__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RacesUiService__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacesUiService__Fields_DEFINED)
#define IL2CPP_STRUCT_RacesUiService__Fields_DEFINED
struct MessageBox;
struct __declspec(align(8)) RacesUiService__Fields {
    float m_defaultHudFadeTime;
    bool m_gameLockedByUi;
    bool m_hidingSeinUi;
    struct MessageBox* m_startPedestalBottomHint;
    bool m_showingOfflineMessage;
    struct MessageBox* m_raceLeaveHint;
};
#endif
#if !defined(IL2CPP_STRUCT_RacesUiService__Fields_FWDDECL)
#define IL2CPP_STRUCT_RacesUiService__Fields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#endif
#undef IL2CPP_STRUCT_RacesUiService__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacesUiService__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RacesUiService__Fields_FWDDECL)
#include <Modloader/app/structs/RacesUiService__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RacesUiService__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
