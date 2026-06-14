#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerticalSpacer.h>

namespace app::classes::VerticalSpacer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, app::VerticalSpacer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008BAD20, void, ApplySpacing, app::VerticalSpacer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008BB300, void, ctor, app::VerticalSpacer* this_ptr)
} // namespace app::classes::VerticalSpacer
