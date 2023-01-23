#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConstraintEnumerator.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/Constraint_1.h>

namespace app::classes::System::Data::ConstraintEnumerator {
    IL2CPP_REGISTER_METHOD(0x01E327F0, void, ctor, (app::ConstraintEnumerator * this_ptr, app::DataSet* data_set))
    IL2CPP_REGISTER_METHOD(0x023921A0, bool, GetNext, (app::ConstraintEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Constraint_1*, GetConstraint, (app::ConstraintEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValidCandidate, (app::ConstraintEnumerator * this_ptr, app::Constraint_1* constraint))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Constraint_1*, get_CurrentObject, (app::ConstraintEnumerator * this_ptr))
} // namespace app::classes::System::Data::ConstraintEnumerator
