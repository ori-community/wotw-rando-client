#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MinerDamagedBehavior.h>

namespace app::classes::MinerDamagedBehavior {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::MinerDamagedBehavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::MinerDamagedBehavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MinerDamagedBehavior * this_ptr))
} // namespace app::classes::MinerDamagedBehavior
