#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SaveSlotInfo.h>
#include <Modloader/app/structs/SaveSlotsManager_c.h>

namespace app::classes::SaveSlotsManager___c {
    IL2CPP_REGISTER_METHOD(0x0092AAA0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SaveSlotsManager_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0092ABE0, bool, _get_AnySaveSlotsExist_b__25_0, app::SaveSlotsManager_c* this_ptr, app::SaveSlotInfo* slot)
} // namespace app::classes::SaveSlotsManager___c
