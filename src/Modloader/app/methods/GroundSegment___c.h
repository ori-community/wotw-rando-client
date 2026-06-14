#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundSegment_c.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GroundSegment___c {
    IL2CPP_REGISTER_METHOD(0x01099060, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GroundSegment_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010991A0, int32_t, _Sort_b__5_0, app::GroundSegment_c* this_ptr, app::Vector3 a, app::Vector3 b)
} // namespace app::classes::GroundSegment___c
