#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VerletSkinning3DModifier.h>

namespace app::classes::VerletSkinning3DModifier {
    IL2CPP_REGISTER_METHOD(0x013C5680, void, OnEnable, (app::VerletSkinning3DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C5970, void, ResizeLists, (app::VerletSkinning3DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C5A90, void, InitializeBonePostions, (app::VerletSkinning3DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C70C0, void, UpdatePositions, (app::VerletSkinning3DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv5, (app::VerletSkinning3DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv6, (app::VerletSkinning3DModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C7FC0, void, ctor, (app::VerletSkinning3DModifier * this_ptr))
} // namespace app::classes::VerletSkinning3DModifier
