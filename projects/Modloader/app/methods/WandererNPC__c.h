#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WandererNPC___c {
    IL2CPP_REGISTER_METHOD(0x008D14F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WandererNPC_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D1630, void, _OnEndInteraction_b__79_0, (app::WandererNPC_c * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708A68, WandererNPC_c__OnEndInteraction_b__79_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OriBackToIdle_b__93_0, (app::WandererNPC_c * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474B710, WandererNPC_c__OriBackToIdle_b__93_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _ItemTaken_b__103_0, (app::WandererNPC_c * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C5C0, WandererNPC_c__ItemTaken_b__103_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _RewardTaken_b__126_0, (app::WandererNPC_c * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783A28, WandererNPC_c__RewardTaken_b__126_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008D16E0, bool, _RewardTaken_b__126_2, (app::WandererNPC_c * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794450, WandererNPC_c__RewardTaken_b__126_2__MethodInfo)
} // namespace app::classes::WandererNPC___c
