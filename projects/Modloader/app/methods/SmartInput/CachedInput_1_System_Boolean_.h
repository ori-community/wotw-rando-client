#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CachedInput_1_System_Boolean_.h>
#include <Modloader/app/structs/InputCacheManager.h>

namespace app::classes::SmartInput::CachedInput_1_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::CachedInput_1_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D18330, bool, Refresh, app::CachedInput_1_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DeclareSources, app::CachedInput_1_System_Boolean_* this_ptr, app::InputCacheManager* manager)
} // namespace app::classes::SmartInput::CachedInput_1_System_Boolean_
