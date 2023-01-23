#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/PhysicalSystemProfiler.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>

namespace app::classes::PhysicalSystemProfiler {
    IL2CPP_REGISTER_METHOD(0x014F9D90, app::GUIStyle*, get_LabelStyle, (app::PhysicalSystemProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014FA100, app::PhysicalSystemProfiler*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x014FA180, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x014FA230, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x014FA460, void, EnsureImgui, (app::PhysicalSystemProfiler * this_ptr, bool registered))
    IL2CPP_REGISTER_METHOD(0x014FA550, void, Awake, (app::PhysicalSystemProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014FA600, void, OnDestroy, (app::PhysicalSystemProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014FA6B0, void, SubmitSample, (app::PhysicalSystemProfiler * this_ptr, app::PhysicalSystemManager* manager, float ms))
    IL2CPP_REGISTER_METHOD(0x014FA9A0, void, Update, (app::PhysicalSystemProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014FB080, void, OnGUI, (app::PhysicalSystemProfiler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014FB360, void, ctor, (app::PhysicalSystemProfiler * this_ptr))
} // namespace app::classes::PhysicalSystemProfiler
