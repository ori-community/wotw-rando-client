#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SketchupGroup {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Version, (app::SketchupGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_Version, (app::SketchupGroup * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, (app::SketchupGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::SketchupGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::SketchupGroup * this_ptr))
} // namespace app::classes::SketchupGroup
