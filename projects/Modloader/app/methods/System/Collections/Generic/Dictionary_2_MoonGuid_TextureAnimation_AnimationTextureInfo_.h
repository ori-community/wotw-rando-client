#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ {
    IL2CPP_REGISTER_METHOD(0x02BC76A0, bool, TryGetValue, (app::Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ * this_ptr, app::MoonGuid* key, app::TextureAnimation_AnimationTextureInfo* value))
    IL2CPP_REGISTER_METHOD(0x02BC5800, void, Add, (app::Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ * this_ptr, app::MoonGuid* key, app::TextureAnimation_AnimationTextureInfo value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_MoonGuid_TextureAnimation_AnimationTextureInfo_
