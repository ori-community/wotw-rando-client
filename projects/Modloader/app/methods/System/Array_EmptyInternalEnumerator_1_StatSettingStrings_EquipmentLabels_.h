#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StatSettingStrings_EquipmentLabels.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, app::Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D088D0,
        app::StatSettingStrings_EquipmentLabels,
        get_Current,
        app::Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x01CFEE40,
        app::Object*,
        IEnumerator_get_Current,
        app::Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, app::Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, )
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_StatSettingStrings_EquipmentLabels_
