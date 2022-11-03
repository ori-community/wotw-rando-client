#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ContinuousIntegration::RecorderSettings {
    IL2CPP_REGISTER_METHOD(0x031C46C0, app::RecorderSettings*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x031C4740, void, set_Instance, (app::RecorderSettings * value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ShotName, (app::RecorderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ShotName, (app::RecorderSettings * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_ShowInputScreen, (app::RecorderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_ShowInputScreen, (app::RecorderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00533160, bool, get_DumpFrames, (app::RecorderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533170, void, set_DumpFrames, (app::RecorderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F43310, bool, get_SpawnEnemies, (app::RecorderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E98B80, void, set_SpawnEnemies, (app::RecorderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031C47D0, bool, get_EnableMotionBlur, (app::RecorderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BB4D0, void, set_EnableMotionBlur, (app::RecorderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_Enable120FPS, (app::RecorderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_Enable120FPS, (app::RecorderSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031C47E0, app::RecorderSettings*, Create, (app::IRecorderShot * shot, bool show_input_screen, bool dump_frames, bool spawn_enemies, float playback_scale, bool scale_entire_shot, bool enable_motion_blur, bool enable120_f_p_s))
    IL2CPP_REGISTER_METHOD(0x031C4A70, void, Reset, ())
    IL2CPP_REGISTER_METHOD(0x031C4A80, void, ctor, (app::RecorderSettings * this_ptr))
} // namespace app::classes::Moon::ContinuousIntegration::RecorderSettings
