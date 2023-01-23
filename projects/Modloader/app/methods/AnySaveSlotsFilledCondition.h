#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnySaveSlotsFilledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::AnySaveSlotsFilledCondition {
    IL2CPP_REGISTER_METHOD(0x005058E0, bool, Validate, (app::AnySaveSlotsFilledCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AnySaveSlotsFilledCondition * this_ptr))
} // namespace app::classes::AnySaveSlotsFilledCondition
