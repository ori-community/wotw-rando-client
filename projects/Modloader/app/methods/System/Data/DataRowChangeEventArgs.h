#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataRowChangeEventArgs.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowAction__Enum.h>

namespace app::classes::System::Data::DataRowChangeEventArgs {
    IL2CPP_REGISTER_METHOD(0x017E0150, void, ctor, (app::DataRowChangeEventArgs * this_ptr, app::DataRow* row, app::DataRowAction__Enum action))
}
