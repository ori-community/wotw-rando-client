#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuilderItem.h>
#include <Modloader/app/structs/BuilderItem__Array.h>
#include <Modloader/app/structs/List_1_BuilderItem_.h>

namespace app::classes::System::Collections::Generic::List_1_BuilderItem_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_BuilderItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_BuilderItem_* this_ptr, app::BuilderItem* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::BuilderItem__Array*, ToArray, app::List_1_BuilderItem_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_BuilderItem_
