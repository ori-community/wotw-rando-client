#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListViewItem.h>
#include <Modloader/app/structs/Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_.h>
#include <Modloader/app/structs/UberID.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ {
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::ListViewItem*, get_Item, (app::Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * this_ptr, app::UberID* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * this_ptr, app::UberID* key, app::ListViewItem* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_
