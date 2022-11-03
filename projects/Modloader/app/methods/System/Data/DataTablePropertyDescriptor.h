#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::DataTablePropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::DataTable*, get_Table, (app::DataTablePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3E400, void, ctor, (app::DataTablePropertyDescriptor * this_ptr, app::DataTable* data_table))
    IL2CPP_REGISTER_METHOD(0x01F3E440, app::Type*, get_ComponentType, (app::DataTablePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::DataTablePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3E4E0, app::Type*, get_PropertyType, (app::DataTablePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F3E580, bool, Equals, (app::DataTablePropertyDescriptor * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x01F3E660, int32_t, GetHashCode, (app::DataTablePropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanResetValue, (app::DataTablePropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x01F3E690, app::Object*, GetValue, (app::DataTablePropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetValue, (app::DataTablePropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetValue, (app::DataTablePropertyDescriptor * this_ptr, app::Object* component, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (app::DataTablePropertyDescriptor * this_ptr, app::Object* component))
} // namespace app::classes::System::Data::DataTablePropertyDescriptor
