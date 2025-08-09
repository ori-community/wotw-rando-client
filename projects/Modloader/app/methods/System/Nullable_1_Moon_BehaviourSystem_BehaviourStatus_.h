#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus___Boxed.h>

namespace app::classes::System::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0020E5F0, app::BehaviourStatus__Enum, get_Value, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus___Boxed* this_ptr, app::BehaviourStatus__Enum value)
} // namespace app::classes::System::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_
