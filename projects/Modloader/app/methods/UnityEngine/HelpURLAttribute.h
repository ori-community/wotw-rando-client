#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HelpURLAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::HelpURLAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::HelpURLAttribute* this_ptr, app::String* url)
}
