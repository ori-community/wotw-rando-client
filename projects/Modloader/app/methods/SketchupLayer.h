#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SketchupLayer.h>

namespace app::classes::SketchupLayer {
    IL2CPP_REGISTER_METHOD(0x006B4500, void, ctor, app::SketchupLayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B45C0, void, cctor, )
} // namespace app::classes::SketchupLayer
