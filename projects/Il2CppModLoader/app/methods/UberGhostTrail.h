#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberGhostTrail {
    IL2CPP_REGISTER_METHOD(0x013EE640, app::Renderer *, get_TargetRenderer, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EE750, void, Reset, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EE830, app::Renderer *, get_Renderer, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EE900, void, WarmUpResource, ())
    IL2CPP_REGISTER_METHOD(0x013EE9E0, void, Awake, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EEA80, void, OnDestroy, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EEB20, void, OnEnable, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EF0F0, void, SetSettings, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EF230, void, UpdateComponents, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EF310, void, Update, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EF540, bool, get_DoUpdate, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EF5F0, void, UpdateTrail, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013EF890, void, EmitQuads, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F0540, app::UberScreenMode__Enum, GetExternalUberScreenMode, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F0930, float, GetUberTweakValue, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F0D20, bool, DoesProvideAtlas, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBCC50, bool, get_IsSuspended, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01016070, void, set_IsSuspended, (app::UberGhostTrail * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00CBCEC0, app::SuspendableMask__Enum, get_Mask, (app::UberGhostTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013F1110, void, set_Mask, (app::UberGhostTrail * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x013F11D0, void, ctor, (app::UberGhostTrail * this_ptr))
}
