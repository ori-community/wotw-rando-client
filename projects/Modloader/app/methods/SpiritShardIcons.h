#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/SpiritShardIcons.h>
#include <Modloader/app/structs/SpiritShardIcons_IconTexture__Array.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::SpiritShardIcons {
    IL2CPP_REGISTER_METHOD(0x00D680F0, app::Texture2D*, GetIcon, (app::SpiritShardIcons * this_ptr, app::SpiritShardType__Enum type))
    IL2CPP_REGISTER_METHOD(0x00D68280, void, OnValidate, (app::SpiritShardIcons * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D68290, app::Texture2D*, FindItem, (app::SpiritShardType__Enum type, app::SpiritShardIcons_IconTexture__Array* list))
    IL2CPP_REGISTER_METHOD(0x00D68310, void, EnsureListMatchesEnum, (app::SpiritShardIcons * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritShardIcons * this_ptr))
} // namespace app::classes::SpiritShardIcons
