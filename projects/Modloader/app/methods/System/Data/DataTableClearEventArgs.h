#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DataTableClearEventArgs.h>
#include <Modloader/app/structs/DataTable.h>

namespace app::classes::System::Data::DataTableClearEventArgs {
    IL2CPP_REGISTER_METHOD(0x01F3AD50, void, ctor, (app::DataTableClearEventArgs * this_ptr, app::DataTable* data_table))
}
