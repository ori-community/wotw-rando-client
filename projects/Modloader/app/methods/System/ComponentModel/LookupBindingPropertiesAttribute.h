#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LookupBindingPropertiesAttribute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::LookupBindingPropertiesAttribute {
    IL2CPP_REGISTER_METHOD(0x01FF5800, void, ctor_1, (app::LookupBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058D710, void, ctor_2, (app::LookupBindingPropertiesAttribute * this_ptr, app::String* data_source, app::String* display_member, app::String* value_member, app::String* lookup_member))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_DataSource, (app::LookupBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_DisplayMember, (app::LookupBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_ValueMember, (app::LookupBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_LookupMember, (app::LookupBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF5820, bool, Equals, (app::LookupBindingPropertiesAttribute * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::LookupBindingPropertiesAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FF59B0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::LookupBindingPropertiesAttribute
