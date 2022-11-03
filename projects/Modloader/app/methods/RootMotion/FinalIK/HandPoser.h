#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::HandPoser {
    IL2CPP_REGISTER_METHOD(0x02075430, void, Start, (app::HandPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020754E0, void, StoreDefaultState, (app::HandPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020757B0, void, FixTransforms, (app::HandPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020759B0, void, AutoMapping, (app::HandPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02075AA0, void, LateUpdate, (app::HandPoser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064DB0, void, ctor, (app::HandPoser * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::HandPoser
