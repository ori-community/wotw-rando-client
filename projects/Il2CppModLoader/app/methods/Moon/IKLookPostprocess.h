#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::IKLookPostprocess {
    IL2CPP_REGISTER_METHOD(0x010FFBB0, void, Awake, (app::IKLookPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010FFBE0, void, OnAddedToAnimator, (app::IKLookPostprocess * this_ptr, app::MoonAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x010FFE60, void, OnDrawGizmosSelected, (app::IKLookPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01100350, void, Process, (app::IKLookPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01100CF0, app::Vector3, HandleLimit, (app::IKLookPostprocess * this_ptr, app::Vector3 pos))
    IL2CPP_REGISTER_METHOD(0x01100F30, void, ctor, (app::IKLookPostprocess * this_ptr))
}
