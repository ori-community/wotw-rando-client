#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderTexture.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UberShaderBlock.h>

namespace app::classes::UberShaderTexture {
    IL2CPP_REGISTER_METHOD(0x012881C0, void, Set, (app::UberShaderTexture * this_ptr, app::String* bind_name, app::UberShaderBlock* attached_block))
    IL2CPP_REGISTER_METHOD(0x012882B0, void, SetWithUnboundVariant, (app::UberShaderTexture * this_ptr, app::String* bind_name, app::UberShaderBlock* attached_block))
    IL2CPP_REGISTER_METHOD(0x01288370, void, BindProperties, (app::UberShaderTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012883D0, void, SetTextureVariant, (app::UberShaderTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, Initialize, (app::UberShaderTexture * this_ptr, app::Texture2D* texture))
    IL2CPP_REGISTER_METHOD(0x01288410, bool, get_TextureSet, (app::UberShaderTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012884C0, void, SpeedupScroll, (app::UberShaderTexture * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x01288500, void, ctor, (app::UberShaderTexture * this_ptr))
} // namespace app::classes::UberShaderTexture
