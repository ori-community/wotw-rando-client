#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize.h>

namespace app::classes::YouCanLeaveYourHatOn_AssetWithSize {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, app::YouCanLeaveYourHatOn_AssetWithSize* this_ptr, app::Object_1* asset, int32_t size)
}
