#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandWormModifier.h>

namespace app::classes::SandWormModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, app::SandWormModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv2, app::SandWormModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::SandWormModifier* this_ptr)
} // namespace app::classes::SandWormModifier
