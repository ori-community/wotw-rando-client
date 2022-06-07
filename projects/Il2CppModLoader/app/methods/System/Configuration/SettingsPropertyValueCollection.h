#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::SettingsPropertyValueCollection {
    IL2CPP_REGISTER_METHOD(0x01FFDDB0, void, ctor, (app::SettingsPropertyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797628, SettingsPropertyValueCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDDE0, int32_t, get_Count, (app::SettingsPropertyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478CB28, SettingsPropertyValueCollection_get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDE10, bool, get_IsSynchronized, (app::SettingsPropertyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742EF0, SettingsPropertyValueCollection_get_IsSynchronized__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDE40, app::SettingsPropertyValue *, get_Item, (app::SettingsPropertyValueCollection * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x04715F38, SettingsPropertyValueCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDE70, app::Object *, get_SyncRoot, (app::SettingsPropertyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047126C8, SettingsPropertyValueCollection_get_SyncRoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDEA0, void, Add, (app::SettingsPropertyValueCollection * this_ptr, app::SettingsPropertyValue * property))
    IL2CPP_REGISTER_METHODINFO(0x04772E28, SettingsPropertyValueCollection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDED0, void, Clear, (app::SettingsPropertyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047107D8, SettingsPropertyValueCollection_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDF00, app::Object *, Clone, (app::SettingsPropertyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760EB8, SettingsPropertyValueCollection_Clone__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDF30, void, CopyTo, (app::SettingsPropertyValueCollection * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04782CA8, SettingsPropertyValueCollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDF60, app::IEnumerator *, GetEnumerator, (app::SettingsPropertyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793E28, SettingsPropertyValueCollection_GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDF90, void, Remove, (app::SettingsPropertyValueCollection * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x04797318, SettingsPropertyValueCollection_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDFC0, void, SetReadOnly, (app::SettingsPropertyValueCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739350, SettingsPropertyValueCollection_SetReadOnly__MethodInfo)
}
