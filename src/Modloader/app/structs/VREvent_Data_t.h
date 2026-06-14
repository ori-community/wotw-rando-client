#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VREvent_Data_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VREvent_Data_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_Data_t_DEFINED)
#include <Modloader/app/structs/VREvent_ApplicationLaunch_t.h>
#include <Modloader/app/structs/VREvent_Chaperone_t.h>
#include <Modloader/app/structs/VREvent_Controller_t.h>
#include <Modloader/app/structs/VREvent_EditingCameraSurface_t.h>
#include <Modloader/app/structs/VREvent_Ipd_t.h>
#include <Modloader/app/structs/VREvent_Keyboard_t.h>
#include <Modloader/app/structs/VREvent_MessageOverlay_t.h>
#include <Modloader/app/structs/VREvent_Mouse_t.h>
#include <Modloader/app/structs/VREvent_Notification_t.h>
#include <Modloader/app/structs/VREvent_Overlay_t.h>
#include <Modloader/app/structs/VREvent_PerformanceTest_t.h>
#include <Modloader/app/structs/VREvent_Process_t.h>
#include <Modloader/app/structs/VREvent_Reserved_t.h>
#include <Modloader/app/structs/VREvent_ScreenshotProgress_t.h>
#include <Modloader/app/structs/VREvent_Screenshot_t.h>
#include <Modloader/app/structs/VREvent_Scroll_t.h>
#include <Modloader/app/structs/VREvent_SeatedZeroPoseReset_t.h>
#include <Modloader/app/structs/VREvent_Status_t.h>
#include <Modloader/app/structs/VREvent_TouchPadMove_t.h>
#if defined(IL2CPP_STRUCT_VREvent_Reserved_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Controller_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Mouse_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Scroll_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Process_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Notification_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Overlay_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Status_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Ipd_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Chaperone_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_PerformanceTest_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_TouchPadMove_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_SeatedZeroPoseReset_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Screenshot_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_ScreenshotProgress_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_ApplicationLaunch_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_EditingCameraSurface_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_MessageOverlay_t_DEFINED) && defined(IL2CPP_STRUCT_VREvent_Keyboard_t_DEFINED)
#define IL2CPP_STRUCT_VREvent_Data_t_DEFINED
struct VREvent_Data_t {
    struct VREvent_Reserved_t reserved;
    struct VREvent_Controller_t controller;
    struct VREvent_Mouse_t mouse;
    struct VREvent_Scroll_t scroll;
    struct VREvent_Process_t process;
    struct VREvent_Notification_t notification;
    struct VREvent_Overlay_t overlay;
    struct VREvent_Status_t status;
    struct VREvent_Ipd_t ipd;
    struct VREvent_Chaperone_t chaperone;
    struct VREvent_PerformanceTest_t performanceTest;
    struct VREvent_TouchPadMove_t touchPadMove;
    struct VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
    struct VREvent_Screenshot_t screenshot;
    struct VREvent_ScreenshotProgress_t screenshotProgress;
    struct VREvent_ApplicationLaunch_t applicationLaunch;
    struct VREvent_EditingCameraSurface_t cameraSurface;
    struct VREvent_MessageOverlay_t messageOverlay;
    struct VREvent_Keyboard_t keyboard;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VREvent_Data_t_FWDDECL)
#define IL2CPP_STRUCT_VREvent_Data_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VREvent_Data_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_Data_t_DEFINED) && !defined(IL2CPP_STRUCT_VREvent_Data_t_FWDDECL)
#include <Modloader/app/structs/VREvent_Data_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VREvent_Data_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
