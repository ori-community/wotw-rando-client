#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RefractionModifier.h>

namespace app::classes::RefractionModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::RefractionModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x008FCE90, void, SetProperties, (app::RefractionModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FCFC0, void, ctor, (app::RefractionModifier * this_ptr))
} // namespace app::classes::RefractionModifier
