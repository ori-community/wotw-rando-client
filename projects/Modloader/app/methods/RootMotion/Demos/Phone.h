#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Phone.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::RootMotion::Demos::Phone {
    IL2CPP_REGISTER_METHOD(0x0222AB70, void, OnPickUp, (app::Phone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222AF80, app::IEnumerator*, EnableDisplay, (app::Phone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnButton1, (app::Phone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222B0D0, void, OnButton2, (app::Phone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222B1C0, void, DropPhone, (app::Phone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Phone * this_ptr))
} // namespace app::classes::RootMotion::Demos::Phone
