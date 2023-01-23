#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger.h>

namespace app::classes::MainThreadLoadingDebugger {
    IL2CPP_REGISTER_METHOD(0x009F4FF0, app::GUIStyle*, get_LabelStyle, (app::MainThreadLoadingDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F5360, app::MainThreadLoadingDebugger*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x009F53E0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x009F5490, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x009F5630, void, EnsureImgui, (app::MainThreadLoadingDebugger * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x009F5720, void, Awake, (app::MainThreadLoadingDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F5720, void, OnDestroy, (app::MainThreadLoadingDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F5730, void, OnEnable, (app::MainThreadLoadingDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F5790, void, OnDisable, (app::MainThreadLoadingDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F5830, void, Update, (app::MainThreadLoadingDebugger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739330, MainThreadLoadingDebugger_Update__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F5D30, void, OnGUI, (app::MainThreadLoadingDebugger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F6010, void, ctor, (app::MainThreadLoadingDebugger * this_ptr))
} // namespace app::classes::MainThreadLoadingDebugger
