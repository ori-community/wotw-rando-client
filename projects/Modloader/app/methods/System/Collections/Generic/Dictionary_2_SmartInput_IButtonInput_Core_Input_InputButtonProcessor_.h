#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_SmartInput_IButtonInput_Core_Inpu_InputButtonProcesso_.h>
#include <Modloader/app/structs/IButtonInput.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * this_ptr, app::IButtonInput* key, app::Input_InputButtonProcessor* value))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_, GetEnumerator, (app::Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SmartInput_IButtonInput_Core_Input_InputButtonProcessor_
