#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::UI::Dropdown_OptionDataList {
    IL2CPP_REGISTER_METHOD(0x024ACEB0, void, ctor, (app::Dropdown_OptionDataList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::List_1_UnityEngine_UI_Dropdown_OptionData_*, get_options, (app::Dropdown_OptionDataList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_options, (app::Dropdown_OptionDataList * this_ptr, app::List_1_UnityEngine_UI_Dropdown_OptionData_* value))
} // namespace app::classes::UnityEngine::UI::Dropdown_OptionDataList
