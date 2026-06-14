#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundSegment.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GroundSegment {
    IL2CPP_REGISTER_METHOD(0x010983C0, app::Vector3, ClampPosition, app::GroundSegment* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x01098500, bool, IsInside, app::GroundSegment* this_ptr, float x)
    IL2CPP_REGISTER_METHOD(0x01098580, float, Evaluate, app::GroundSegment* this_ptr, float x)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Test, app::GroundSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01098810, void, Sort, app::GroundSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01098A30, void, Generate, app::GroundSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01098E90, void, OnDrawGizmos, app::GroundSegment* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01099050, void, ctor, app::GroundSegment* this_ptr)
} // namespace app::classes::GroundSegment
