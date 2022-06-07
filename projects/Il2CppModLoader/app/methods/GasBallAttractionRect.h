#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GasBallAttractionRect {
    IL2CPP_REGISTER_METHOD(0x00418B70, void, Enable, (app::GasBallAttractionRect * this_ptr, app::IGasBallBait * owner))
    IL2CPP_REGISTER_METHOD(0x00418C50, void, Disable, (app::GasBallAttractionRect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418D10, void, UpdateRuntimeZone, (app::GasBallAttractionRect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418E70, bool, IsOnRange, (app::GasBallAttractionRect * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00418EB0, app::Vector2, GasBallBaitCenter, (app::GasBallAttractionRect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_GasBallAttractionTime, (app::GasBallAttractionRect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418FD0, void, OnDrawGizmosSelected, (app::GasBallAttractionRect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00419200, void, ctor, (app::GasBallAttractionRect * this_ptr))
}
