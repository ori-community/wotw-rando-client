#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AtlasSpriteTexture.h>

namespace app::classes::AtlasSpriteTexture {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AtlasSpriteTexture * this_ptr))
}
