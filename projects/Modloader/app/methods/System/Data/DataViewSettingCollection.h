#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::DataViewSettingCollection {
    IL2CPP_REGISTER_METHOD(0x01F4BE20, void, ctor, (app::DataViewSettingCollection * this_ptr, app::DataViewManager* data_view_manager))
    IL2CPP_REGISTER_METHODINFO(0x0476E828, DataViewSettingCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4BFA0, app::DataViewSetting*, get_Item, (app::DataViewSettingCollection * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHODINFO(0x0475B1C8, DataViewSettingCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4C230, void, set_Item, (app::DataViewSettingCollection * this_ptr, app::DataTable* table, app::DataViewSetting* value))
    IL2CPP_REGISTER_METHODINFO(0x047187D8, DataViewSettingCollection_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F4C330, void, CopyTo, (app::DataViewSettingCollection * this_ptr, app::Array* ar, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F4C4F0, int32_t, get_Count, (app::DataViewSettingCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F4C540, app::IEnumerator*, GetEnumerator, (app::DataViewSettingCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::DataViewSettingCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, get_SyncRoot, (app::DataViewSettingCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F4C750, void, Remove, (app::DataViewSettingCollection * this_ptr, app::DataTable* table))
} // namespace app::classes::System::Data::DataViewSettingCollection
