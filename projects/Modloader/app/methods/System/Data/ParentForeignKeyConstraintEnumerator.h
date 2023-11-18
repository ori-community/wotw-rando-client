#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParentForeignKeyConstraintEnumerator.h>
#include <Modloader/app/structs/Constraint_1.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>

namespace app::classes::System::Data::ParentForeignKeyConstraintEnumerator {
    IL2CPP_REGISTER_METHOD(0x01E48F30, void, ctor, (app::ParentForeignKeyConstraintEnumerator * this_ptr, app::DataSet* data_set, app::DataTable* in_table))
    IL2CPP_REGISTER_METHOD(0x01E48F90, bool, IsValidCandidate, (app::ParentForeignKeyConstraintEnumerator * this_ptr, app::Constraint_1* constraint))
} // namespace app::classes::System::Data::ParentForeignKeyConstraintEnumerator
