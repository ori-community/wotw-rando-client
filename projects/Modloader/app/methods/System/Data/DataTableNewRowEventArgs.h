#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DataTableNewRowEventArgs.h>
#include <Modloader/app/structs/DataRow.h>

namespace app::classes::System::Data::DataTableNewRowEventArgs {
    IL2CPP_REGISTER_METHOD(0x01F3E350, void, ctor, (app::DataTableNewRowEventArgs * this_ptr, app::DataRow* data_row))
}
