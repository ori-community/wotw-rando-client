#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardIcons_IconTexture__Boxed.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::SpiritShardIcons_IconTexture {
    IL2CPP_REGISTER_METHOD(0x0011E720, void, ctor, app::SpiritShardIcons_IconTexture__Boxed* this_ptr, app::SpiritShardType__Enum type, app::Texture2D* texture)
}
