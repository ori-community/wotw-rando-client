#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PassiveStateModifier {
    IL2CPP_REGISTER_METHOD(0x01B779A0, int32_t, get_StateGUIDToApply, (app::PassiveStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B77A40, void, set_StateGUIDToApply, (app::PassiveStateModifier * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::IPassiveStateDescriptor*, get_Controller, (app::PassiveStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Controller, (app::PassiveStateModifier * this_ptr, app::IPassiveStateDescriptor* value))
    IL2CPP_REGISTER_METHOD(0x01B77B10, app::String*, get_StateName, (app::PassiveStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B77BD0, void, Apply, (app::PassiveStateModifier * this_ptr, app::MoonReference_1_UnityEngine_GameObject_* target, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x01B77D50, void, ctor, (app::PassiveStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B77E60, void, OnTargetChange, (app::PassiveStateModifier * this_ptr, app::GameObject* old_target, app::GameObject* new_target))
    IL2CPP_REGISTER_METHOD(0x01B77F30, void, CaptureCurrentTargetState, (app::PassiveStateModifier * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x01B78100, void, RefreshControler, (app::PassiveStateModifier * this_ptr, app::GameObject* target))
} // namespace app::classes::PassiveStateModifier
