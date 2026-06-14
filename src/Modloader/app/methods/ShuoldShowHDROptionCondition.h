#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShuoldShowHDROptionCondition.h>

namespace app::classes::ShuoldShowHDROptionCondition {
    IL2CPP_REGISTER_METHOD(0x0073DFD0, bool, Validate, app::ShuoldShowHDROptionCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ShuoldShowHDROptionCondition* this_ptr)
} // namespace app::classes::ShuoldShowHDROptionCondition
