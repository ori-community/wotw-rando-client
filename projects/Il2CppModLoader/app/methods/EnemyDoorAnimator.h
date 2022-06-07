#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnemyDoorAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonSetupVisuals *, get_MoonSetupVisuals, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C81C30, void, set_MoonSetupVisuals, (app::EnemyDoorAnimator * this_ptr, app::IMoonSetupVisuals * value))
    IL2CPP_REGISTER_METHOD(0x00C81D00, app::ITimelineEntity *, get_VisualsOpenDoorTimeline, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C81D20, app::ITimelineEntity *, get_VisualsCloseDoorTimeline, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_1, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_2, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_3, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_4, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_5, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_6, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_7, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_8, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_9, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_10, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_11, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_12, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_13, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_14, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_15, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_16, (app::EnemyDoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver *, GetResolverForType_17, (app::EnemyDoorAnimator * this_ptr))
}
