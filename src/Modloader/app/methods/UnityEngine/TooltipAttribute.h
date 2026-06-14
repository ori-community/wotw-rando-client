#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TooltipAttribute.h>

namespace app::classes::UnityEngine::TooltipAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::TooltipAttribute* this_ptr, app::String* tooltip)
}
