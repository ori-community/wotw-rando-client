#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SceneFrameworkPerformanceMonitor {
    IL2CPP_REGISTER_METHOD(0x00B9FFC0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x00BA0070, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x00BA0300, void, OnDestroy, (app::SceneFrameworkPerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA03A0, void, Awake, (app::SceneFrameworkPerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA0300, void, CloseWriter, (app::SceneFrameworkPerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA0670, bool, get_Ready, ())
    IL2CPP_REGISTER_METHOD(0x00BA0720, void, Write, (app::SceneFrameworkPerformanceMonitor * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x00BA0830, void, AddSceneLoadItem, (app::SceneManagerScene * scene))
    IL2CPP_REGISTER_METHOD(0x00BA0AC0, void, UnloadScene, (app::SceneRoot * scene))
    IL2CPP_REGISTER_METHOD(0x00BA0BB0, void, EnableScene, (app::SceneRoot * scene))
    IL2CPP_REGISTER_METHOD(0x00BA0CA0, void, DisableScene, (app::SceneRoot * scene))
    IL2CPP_REGISTER_METHOD(0x00BA0D90, void, Update, (app::SceneFrameworkPerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintSoundEntry, (app::SceneFrameworkPerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BA0FF0, void, ctor, (app::SceneFrameworkPerformanceMonitor * this_ptr))
} // namespace app::classes::SceneFrameworkPerformanceMonitor
