#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VerletSkinning2DModifier.h>

namespace app::classes::VerletSkinning2DModifier {
    IL2CPP_REGISTER_METHOD(0x013C4BA0, void, OnEnable, (app::VerletSkinning2DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C4BB0, void, ResizeLists, (app::VerletSkinning2DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C4C80, void, InitializeBonePostions, (app::VerletSkinning2DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C5200, void, UpdatePositions, (app::VerletSkinning2DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C55D0, void, ctor, (app::VerletSkinning2DModifier * this_ptr))
} // namespace app::classes::VerletSkinning2DModifier
