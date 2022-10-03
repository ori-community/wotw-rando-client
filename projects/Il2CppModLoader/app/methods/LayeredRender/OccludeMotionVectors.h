#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LayeredRender::OccludeMotionVectors {
    IL2CPP_REGISTER_METHOD(0x00F25D50, void, Start, (app::OccludeMotionVectors * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::OccludeMotionVectors * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F26530, void, ctor, (app::OccludeMotionVectors * this_ptr))
} // namespace app::classes::LayeredRender::OccludeMotionVectors
