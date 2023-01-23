#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KeystonePickup.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/RuntimeWorldMapIcon.h>

namespace app::classes::KeystonePickup {
    IL2CPP_REGISTER_METHOD(0x00E70A70, void, OnCollectorCandidateTouch, (app::KeystonePickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x00E70B80, void, Collected, (app::KeystonePickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_CompletionAmount, (app::KeystonePickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_AreaCompletorPosition, (app::KeystonePickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::KeystonePickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E71050, bool, _Collected_b__7_0, (app::KeystonePickup * this_ptr, app::RuntimeWorldMapIcon* a))
    IL2CPP_REGISTER_METHODINFO(0x0477EC60, KeystonePickup__Collected_b__7_0__MethodInfo)
} // namespace app::classes::KeystonePickup
