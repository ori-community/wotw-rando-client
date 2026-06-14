#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberTrailModifier.h>

namespace app::classes::UberTrailModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, app::UberTrailModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::UberTrailModifier* this_ptr)
} // namespace app::classes::UberTrailModifier
