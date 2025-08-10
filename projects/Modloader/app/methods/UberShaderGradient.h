#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/UberShaderGradient.h>

namespace app::classes::UberShaderGradient {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Gradient*, get_Gradient, app::UberShaderGradient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01912770, void, BindProperties, app::UberShaderGradient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01912800, void, CreateTexture, app::UberShaderGradient* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019128C0, void, Set, app::UberShaderGradient* this_ptr, app::String* bind_name, app::UberShaderBlock* attached_block)
    IL2CPP_REGISTER_METHOD(0x01912900, void, ctor, app::UberShaderGradient* this_ptr)
} // namespace app::classes::UberShaderGradient
