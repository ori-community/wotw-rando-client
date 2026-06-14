#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataTable_RowDiffIdUsageSection__Boxed.h>

namespace app::classes::System::Data::DataTable_RowDiffIdUsageSection {
    IL2CPP_REGISTER_METHOD(0x001D9FB0, void, Prepare, app::DataTable_RowDiffIdUsageSection__Boxed* this_ptr, app::DataTable* table)
}
