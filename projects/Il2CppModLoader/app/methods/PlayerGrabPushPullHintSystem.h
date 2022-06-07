#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerGrabPushPullHintSystem {
    IL2CPP_REGISTER_METHOD(0x0140ECE0, void, OnEnterRange, (app::PlayerGrabPushPullHintSystem * this_ptr, bool bash))
    IL2CPP_REGISTER_METHOD(0x0140EEE0, void, OnGrabBlock, (app::PlayerGrabPushPullHintSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140F120, void, HidePressToPushOrPull, (app::PlayerGrabPushPullHintSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140F1F0, void, HidePressToGrab, (app::PlayerGrabPushPullHintSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0140F2C0, void, FixedUpdate, (app::PlayerGrabPushPullHintSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetReferenceToSein, (app::PlayerGrabPushPullHintSystem * this_ptr, app::SeinCharacter * sein))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerGrabPushPullHintSystem * this_ptr))
}
