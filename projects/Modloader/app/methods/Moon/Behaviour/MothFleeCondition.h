#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MothFleeCondition.h>

namespace app::classes::Moon::Behaviour::MothFleeCondition {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MothFleeCondition* this_ptr)
}
