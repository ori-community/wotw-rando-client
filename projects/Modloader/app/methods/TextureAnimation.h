#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TextureAnimation {
    IL2CPP_REGISTER_METHOD(0x010E90B0, float, get_Duration, (app::TextureAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E9140, float, TimeToFrame, (app::TextureAnimation * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x010E9150, float, FrameToTime, (app::TextureAnimation * this_ptr, float frame))
    IL2CPP_REGISTER_METHOD(0x010E9160, app::AtlasSpriteTexture*, GetTextureAtTime, (app::TextureAnimation * this_ptr, float time, app::Atlas** atlas))
    IL2CPP_REGISTER_METHOD(0x010E9170, app::AtlasSpriteTexture*, GetTextureAtIndex, (app::TextureAnimation * this_ptr, float index, app::Atlas** found_atlas))
    IL2CPP_REGISTER_METHOD(0x010E9390, app::AtlasSpriteTexture*, GetFrameForId, (app::TextureAnimation * this_ptr, app::MoonGuid* guid, app::Atlas** found_atlas))
    IL2CPP_REGISTER_METHOD(0x010E95E0, void, SortAnimationFrames, (app::TextureAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E9850, void, AddFrameForPlatform, (app::TextureAnimation * this_ptr, app::AtlasSpriteTexture* frame, app::Atlas* atlas, app::UberAtlassingPlatform__Enum platform))
    IL2CPP_REGISTER_METHOD(0x010E9960, void, ctor, (app::TextureAnimation * this_ptr))
} // namespace app::classes::TextureAnimation
