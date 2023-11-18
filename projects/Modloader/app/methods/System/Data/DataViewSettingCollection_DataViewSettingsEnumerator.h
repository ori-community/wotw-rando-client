#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataViewSettingCollection_DataViewSettingsEnumerator.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator {
    IL2CPP_REGISTER_METHOD(0x01F4C780, void, ctor, (app::DataViewSettingCollection_DataViewSettingsEnumerator * this_ptr, app::DataViewManager* dvm))
    IL2CPP_REGISTER_METHOD(0x01F4C880, bool, MoveNext, (app::DataViewSettingCollection_DataViewSettingsEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F4C910, void, Reset, (app::DataViewSettingCollection_DataViewSettingsEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F4C9A0, app::Object*, get_Current, (app::DataViewSettingCollection_DataViewSettingsEnumerator * this_ptr))
} // namespace app::classes::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator
