#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstraintTable.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>

namespace app::classes::System::Data::ConstraintTable {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::ConstraintTable * this_ptr, app::DataTable* t, app::XmlSchemaIdentityConstraint* c))
}
