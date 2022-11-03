#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FallingRocksArea {
    IL2CPP_REGISTER_METHOD(0x00997A90, void, Start, (app::FallingRocksArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00997E80, void, OnDrawGizmos, (app::FallingRocksArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00997F70, app::Vector3, GetRadomPosition, (app::FallingRocksArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998550, void, ctor, (app::FallingRocksArea * this_ptr))
} // namespace app::classes::FallingRocksArea
