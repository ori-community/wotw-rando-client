#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AlphaBlendModeEntity.h>
#include <Modloader/app/structs/IAlphaBlendModeController.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::AlphaBlendModeEntity {
    IL2CPP_REGISTER_METHOD(0x010C7360, app::IAlphaBlendModeController*, get_EffectiveTarget, app::AlphaBlendModeEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_CurrentTime, app::AlphaBlendModeEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C74D0, void, OnStartPlayback, app::AlphaBlendModeEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, app::AlphaBlendModeEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, app::AlphaBlendModeEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, app::AlphaBlendModeEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C74E0, void, OnUpdateEntity, app::AlphaBlendModeEntity* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x010C7500, void, HandleActivations, app::AlphaBlendModeEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C76D0, bool, ShowGenericTarget, app::AlphaBlendModeEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010C76E0, void, ctor, app::AlphaBlendModeEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::AlphaBlendModeEntity
