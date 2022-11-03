#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Rendering::DiskBlurKernelGenerator {
    IL2CPP_REGISTER_METHOD(0x00C54030, app::Int32__Array*, Generate, (int32_t pass_index, float pixel_radius, int32_t thread_size, int32_t max_radius))
    IL2CPP_REGISTER_METHOD(0x00C54610, void, cctor, ())
} // namespace app::classes::Moon::Rendering::DiskBlurKernelGenerator
