#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Rendering::CullingCategoryUtility {
    IL2CPP_REGISTER_METHOD(0x00C53B80, bool, Register, (app::Renderer * renderer, uint32_t mask, app::Component_1 * log_context))
    IL2CPP_REGISTER_METHOD(0x00C53CF0, bool, Unregister, (app::Renderer * renderer, uint32_t mask, app::Component_1 * log_context))
    IL2CPP_REGISTER_METHOD(0x00C53E70, void, LogRegistrationError, (app::String * error, app::Component_1 * log_context))
}
