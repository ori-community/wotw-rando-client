#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Rendering::CullingCategoryUtility {
    IL2CPP_REGISTER_METHOD(0x00C53B80, bool, Register, (app::Renderer * renderer, uint32_t mask, app::Component_1* log_context))
    IL2CPP_REGISTER_METHOD(0x00C53CF0, bool, Unregister, (app::Renderer * renderer, uint32_t mask, app::Component_1* log_context))
    IL2CPP_REGISTER_METHOD(0x00C53E70, void, LogRegistrationError, (app::String * error, app::Component_1* log_context))
} // namespace app::classes::Moon::Rendering::CullingCategoryUtility
