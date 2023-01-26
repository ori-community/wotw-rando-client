#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Constraint_1.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/PropertyCollection.h>

namespace app::classes::System::Data::Constraint {
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_ConstraintName, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D500, void, set_ConstraintName, (app::Constraint_1 * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0238D780, app::String*, get_SchemaName, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D7B0, void, set_SchemaName, (app::Constraint_1 * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_InCollection, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D7C0, void, set_InCollection, (app::Constraint_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0238D810, app::PropertyCollection*, get_ExtendedProperties, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238D980, void, CheckConstraint, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238DA30, void, CheckStateForProperty, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DataSet*, get__DataSet, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00980110, app::String*, ToString, (app::Constraint_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238DB70, void, ctor, (app::Constraint_1 * this_ptr))
} // namespace app::classes::System::Data::Constraint
