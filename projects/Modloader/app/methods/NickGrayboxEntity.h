#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NickGrayboxEntity {
    IL2CPP_REGISTER_METHOD(0x005FDB90, void, Start, (app::NickGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FDC50, void, OnFixedUpdate, (app::NickGrayboxEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FDD60, void, ctor, (app::NickGrayboxEntity * this_ptr))
} // namespace app::classes::NickGrayboxEntity
