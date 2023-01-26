#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/YouCanLeaveYourHatOn_c.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_Data.h>

namespace app::classes::YouCanLeaveYourHatOn___c {
    IL2CPP_REGISTER_METHOD(0x01C5FA50, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::YouCanLeaveYourHatOn_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C5FB90, int32_t, _PrintReport_b__5_0, (app::YouCanLeaveYourHatOn_c * this_ptr, app::YouCanLeaveYourHatOn_Data* a, app::YouCanLeaveYourHatOn_Data* b))
    IL2CPP_REGISTER_METHOD(0x01C5FBD0, int32_t, _PrintReport_b__5_2, (app::YouCanLeaveYourHatOn_c * this_ptr, app::YouCanLeaveYourHatOn_AssetWithSize* a, app::YouCanLeaveYourHatOn_AssetWithSize* b))
    IL2CPP_REGISTER_METHOD(0x01C5FBD0, int32_t, _PrintReport_b__5_3, (app::YouCanLeaveYourHatOn_c * this_ptr, app::YouCanLeaveYourHatOn_AssetWithSize* a, app::YouCanLeaveYourHatOn_AssetWithSize* b))
} // namespace app::classes::YouCanLeaveYourHatOn___c
