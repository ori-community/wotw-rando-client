#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_.h>
#include <Modloader/app/structs/KeyCodeButtonInput.h>
#include <Modloader/app/structs/KeyCode__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ * this_ptr, app::KeyCode__Enum key, app::KeyCodeButtonInput** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ * this_ptr, app::KeyCode__Enum key, app::KeyCodeButtonInput* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_KeyCode_SmartInput_KeyCodeButtonInput_
