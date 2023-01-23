#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/SnapTrapHookLogic.h>

namespace app::classes::SnapTrapHookLogic {
    IL2CPP_REGISTER_METHOD(0x007008C0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED25D0, void, set_MoonSetupAnimator, (app::SnapTrapHookLogic * this_ptr, app::IMoonSetupAnimator* value))
    IL2CPP_REGISTER_METHOD(0x00ED26A0, void, Awake, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED2CF0, void, OnEnable, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E21060, void, InitSnapTrapHook, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED2E10, void, AssignReferences, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED30F0, void, FixedUpdate, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED33C0, void, DisableLeash, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E0F0, SnapTrapHookLogic_DisableLeash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ED3430, void, EnableLeash, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A4A8, SnapTrapHookLogic_EnableLeash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Suspend, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Resume, (app::SnapTrapHookLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED34A0, void, ctor, (app::SnapTrapHookLogic * this_ptr))
} // namespace app::classes::SnapTrapHookLogic
