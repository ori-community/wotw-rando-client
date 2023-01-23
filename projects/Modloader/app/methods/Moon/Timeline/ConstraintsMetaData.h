#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConstraintsMetaData.h>
#include <Modloader/app/structs/ConstraintFlag__Enum.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/Constraint__Enum.h>

namespace app::classes::Moon::Timeline::ConstraintsMetaData {
    IL2CPP_REGISTER_METHOD(0x01BB8230, bool, HasFlags, (app::ConstraintsMetaData * this_ptr, app::ConstraintFlag__Enum flags))
    IL2CPP_REGISTER_METHOD(0x01BB8240, app::ConstraintsMetaData*, CopyFor, (app::ConstraintsMetaData * this_ptr, app::EntityId entity_id, app::Constraint__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConstraintsMetaData * this_ptr))
} // namespace app::classes::Moon::Timeline::ConstraintsMetaData
