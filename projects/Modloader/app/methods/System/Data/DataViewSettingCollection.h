#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/DataViewSetting.h>
#include <Modloader/app/structs/DataViewSettingCollection.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Data::DataViewSettingCollection {
    IL2CPP_REGISTER_METHOD(0x01F4BE20, void, ctor, app::DataViewSettingCollection* this_ptr, app::DataViewManager* data_view_manager)
    IL2CPP_REGISTER_METHOD(0x01F4BFA0, app::DataViewSetting*, get_Item, app::DataViewSettingCollection* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01F4C230, void, set_Item, app::DataViewSettingCollection* this_ptr, app::DataTable* table, app::DataViewSetting* value)
    IL2CPP_REGISTER_METHOD(0x01F4C330, void, CopyTo, app::DataViewSettingCollection* this_ptr, app::Array* ar, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01F4C4F0, int32_t, get_Count, app::DataViewSettingCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F4C540, app::IEnumerator*, GetEnumerator, app::DataViewSettingCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, app::DataViewSettingCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, get_SyncRoot, app::DataViewSettingCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F4C750, void, Remove, app::DataViewSettingCollection* this_ptr, app::DataTable* table)
} // namespace app::classes::System::Data::DataViewSettingCollection
