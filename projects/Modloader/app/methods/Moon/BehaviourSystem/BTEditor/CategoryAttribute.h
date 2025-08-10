#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CategoryAttribute_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::BTEditor::CategoryAttribute {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, app::CategoryAttribute_1* this_ptr, app::String* category, bool is_core_type)
}
