#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataRowBuilder.h>
#include <Modloader/app/structs/DataTable.h>

namespace app::classes::System::Data::DataRowBuilder {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, app::DataRowBuilder* this_ptr, app::DataTable* table, int32_t record)
}
