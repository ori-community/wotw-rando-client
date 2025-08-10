#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberAtlasExternal.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UberShaderAtlasTexture.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/UberShaderMainTexture.h>

namespace app::classes::UberShaderMainTexture {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BindProperties, app::UberShaderMainTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01912A80, app::IUberAtlasExternal*, GetExternalAtlasProvider, app::UberShaderMainTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::UberShaderAtlasTexture*, get_AtlasTexture, app::UberShaderMainTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01912BE0, void, Set, app::UberShaderMainTexture* this_ptr, app::String* bind_name, app::UberShaderBlock* attached_block)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetOriginalTextureWithoutBinding, app::UberShaderMainTexture* this_ptr, app::Texture2D* texture)
    IL2CPP_REGISTER_METHOD(0x01912F70, void, ctor, app::UberShaderMainTexture* this_ptr)
} // namespace app::classes::UberShaderMainTexture
