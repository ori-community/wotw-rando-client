#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Index_c_DisplayClass86_0.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataViewListener.h>
#include <Modloader/app/structs/ListChangedType__Enum.h>

namespace app::classes::System::Data::Index___c__DisplayClass86_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Index_c_DisplayClass86_0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E3F710, void, _MaintainDataView_b__0, (app::Index_c_DisplayClass86_0 * this_ptr, app::DataViewListener* listener, app::ListChangedType__Enum type, app::DataRow* row, bool track))
} // namespace app::classes::System::Data::Index___c__DisplayClass86_0
