#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TextureTilingAdjuster {
    IL2CPP_REGISTER_METHOD(0x010EC7D0, void, Start, (app::TextureTilingAdjuster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ECA20, void, FixedUpdate, (app::TextureTilingAdjuster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ECC00, void, ctor, (app::TextureTilingAdjuster * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ECE10, void, cctor, ())
} // namespace app::classes::TextureTilingAdjuster
