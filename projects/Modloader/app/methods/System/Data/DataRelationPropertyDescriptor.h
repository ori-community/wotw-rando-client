#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataRelationPropertyDescriptor.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::DataRelationPropertyDescriptor {
    IL2CPP_REGISTER_METHOD(0x023A9200, void, ctor, (app::DataRelationPropertyDescriptor * this_ptr, app::DataRelation* data_relation))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::DataRelation*, get_Relation, (app::DataRelationPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A9260, app::Type*, get_ComponentType, (app::DataRelationPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, (app::DataRelationPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A9300, app::Type*, get_PropertyType, (app::DataRelationPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A93A0, bool, Equals, (app::DataRelationPropertyDescriptor * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x01F3E660, int32_t, GetHashCode, (app::DataRelationPropertyDescriptor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanResetValue, (app::DataRelationPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x023A9480, app::Object*, GetValue, (app::DataRelationPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetValue, (app::DataRelationPropertyDescriptor * this_ptr, app::Object* component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetValue, (app::DataRelationPropertyDescriptor * this_ptr, app::Object* component, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (app::DataRelationPropertyDescriptor * this_ptr, app::Object* component))
} // namespace app::classes::System::Data::DataRelationPropertyDescriptor
