#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ColorAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::BTEditor::ColorAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ColorAttribute * this_ptr, app::String* color))
}
