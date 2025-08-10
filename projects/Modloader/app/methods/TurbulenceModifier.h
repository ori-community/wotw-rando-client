#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurbulenceModifier.h>

namespace app::classes::TurbulenceModifier {
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::TurbulenceModifier* this_ptr)
}
