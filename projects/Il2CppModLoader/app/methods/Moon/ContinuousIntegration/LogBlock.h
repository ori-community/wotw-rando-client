#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::ContinuousIntegration::LogBlock {
    IL2CPP_REGISTER_METHOD(0x0318B0D0, void, ctor, (app::LogBlock * this_ptr, app::String* block_name, app::String* block_description))
    IL2CPP_REGISTER_METHOD(0x0318B190, void, Dispose, (app::LogBlock * this_ptr))
} // namespace app::classes::Moon::ContinuousIntegration::LogBlock
