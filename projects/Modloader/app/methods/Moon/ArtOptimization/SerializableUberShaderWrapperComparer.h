#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::SerializableUberShaderWrapperComparer {
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, ctor, (app::SerializableUberShaderWrapperComparer * this_ptr, float lerp_value))
    IL2CPP_REGISTER_METHOD(0x00CB27B0, int32_t, Compare, (app::SerializableUberShaderWrapperComparer * this_ptr, app::SerializableUberShaderWrapper* x, app::SerializableUberShaderWrapper* y))
} // namespace app::classes::Moon::ArtOptimization::SerializableUberShaderWrapperComparer
