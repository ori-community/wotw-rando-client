#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EffectorOffset.h>

namespace app::classes::RootMotion::Demos::EffectorOffset {
    IL2CPP_REGISTER_METHOD(0x02217AD0, void, OnModifyOffset, app::EffectorOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::EffectorOffset* this_ptr)
} // namespace app::classes::RootMotion::Demos::EffectorOffset
