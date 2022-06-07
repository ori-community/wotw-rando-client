#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::ParentForeignKeyConstraintEnumerator {
    IL2CPP_REGISTER_METHOD(0x01E48F30, void, ctor, (app::ParentForeignKeyConstraintEnumerator * this_ptr, app::DataSet * data_set, app::DataTable * in_table))
    IL2CPP_REGISTER_METHOD(0x01E48F90, bool, IsValidCandidate, (app::ParentForeignKeyConstraintEnumerator * this_ptr, app::Constraint_1 * constraint))
}
