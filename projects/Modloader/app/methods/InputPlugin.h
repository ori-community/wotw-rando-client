#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InputPlugin.h>
#include <Modloader/app/structs/AnalogueInputData.h>
#include <Modloader/app/structs/InputData.h>

namespace app::classes::InputPlugin {
    IL2CPP_REGISTER_METHOD(0x00628ED0, void, Awake, (app::InputPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00629230, void, OnDestroy, (app::InputPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006292F0, void, Apply_1, (app::InputPlugin * this_ptr, app::InputData* input_data))
    IL2CPP_REGISTER_METHOD(0x006294C0, void, Apply_2, (app::InputPlugin * this_ptr, app::AnalogueInputData* input_data))
    IL2CPP_REGISTER_METHOD(0x00629580, void, PlayCycle, (app::InputPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00629730, void, RecordCycle, (app::InputPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x006298E0, void, Exit, (app::InputPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InputPlugin * this_ptr))
} // namespace app::classes::InputPlugin
