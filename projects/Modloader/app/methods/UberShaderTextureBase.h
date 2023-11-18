#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderTextureBase.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberShaderTextureBase {
    IL2CPP_REGISTER_METHOD(0x012885A0, bool, get_IsTransformed, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01288740, app::Vector2, get_TextureScale, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01288760, void, set_TextureScale, (app::UberShaderTextureBase * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x01288790, app::Vector2, get_TextureOffset, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012887B0, void, set_TextureOffset, (app::UberShaderTextureBase * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x012887F0, app::Vector4, GetTextureShaderSettings, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01288970, app::Vector2, get_TextureScroll, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01288990, void, set_TextureScroll, (app::UberShaderTextureBase * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x012889C0, app::Vector2, get_TextureScrollMultiplier, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012889E0, void, set_TextureScrollMultiplier, (app::UberShaderTextureBase * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_TextureRotation, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01288A10, void, set_TextureRotation, (app::UberShaderTextureBase * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A479E0, float, get_TextureRotationSpeed, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01288A20, void, set_TextureRotationSpeed, (app::UberShaderTextureBase * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01288A30, void, Set, (app::UberShaderTextureBase * this_ptr, app::String* bind_name, app::UberShaderBlock* attached_block))
    IL2CPP_REGISTER_METHOD(0x01288D50, void, BindTexSettings, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01288F90, void, BindOptions, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012891B0, void, BindBase, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012894D0, void, ctor, (app::UberShaderTextureBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012895C0, void, cctor, ())
} // namespace app::classes::UberShaderTextureBase
