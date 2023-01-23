#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IconAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::BTEditor::IconAttribute {
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, (app::IconAttribute * this_ptr, app::String* icon_path, bool is_resources))
}
