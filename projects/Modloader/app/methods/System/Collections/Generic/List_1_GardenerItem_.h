#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_GardenerItem_.h>
#include <Modloader/app/structs/GardenerItem.h>
#include <Modloader/app/structs/GardenerItem__Array.h>

namespace app::classes::System::Collections::Generic::List_1_GardenerItem_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_GardenerItem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_GardenerItem_ * this_ptr, app::GardenerItem* item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::GardenerItem__Array*, ToArray, (app::List_1_GardenerItem_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_GardenerItem_
