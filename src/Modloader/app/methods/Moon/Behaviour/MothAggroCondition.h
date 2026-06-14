#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MothAggroCondition.h>

namespace app::classes::Moon::Behaviour::MothAggroCondition {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MothAggroCondition* this_ptr)
}
