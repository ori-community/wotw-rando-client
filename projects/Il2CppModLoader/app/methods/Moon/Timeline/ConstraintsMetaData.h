#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::ConstraintsMetaData {
    IL2CPP_REGISTER_METHOD(0x01BB8230, bool, HasFlags, (app::ConstraintsMetaData * this_ptr, app::ConstraintFlag__Enum flags))
    IL2CPP_REGISTER_METHOD(0x01BB8240, app::ConstraintsMetaData *, CopyFor, (app::ConstraintsMetaData * this_ptr, app::EntityId entity_id, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConstraintsMetaData * this_ptr))
}
