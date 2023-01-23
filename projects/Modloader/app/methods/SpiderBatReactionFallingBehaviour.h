#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderBatReactionFallingBehaviour.h>

namespace app::classes::SpiderBatReactionFallingBehaviour {
    IL2CPP_REGISTER_METHOD(0x0095E670, void, OnEnterFalling, (app::SpiderBatReactionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095E7A0, void, OnEnterLand, (app::SpiderBatReactionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095E9E0, void, EndLand, (app::SpiderBatReactionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04718520, SpiderBatReactionFallingBehaviour_EndLand__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0095ED70, void, FallingUpdate, (app::SpiderBatReactionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095EEB0, bool, get_ShouldLand, (app::SpiderBatReactionFallingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095F060, void, ctor, (app::SpiderBatReactionFallingBehaviour * this_ptr))
} // namespace app::classes::SpiderBatReactionFallingBehaviour
