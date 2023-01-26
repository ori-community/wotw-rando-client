#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnReceiveDamage.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::fsm::triggers::OnReceiveDamage {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::OnReceiveDamage * this_ptr, app::Damage* damage))
}
