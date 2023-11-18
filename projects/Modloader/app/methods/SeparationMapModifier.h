#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeparationMapModifier.h>

namespace app::classes::SeparationMapModifier {
    IL2CPP_REGISTER_METHOD(0x00AB5C30, void, SetProperties, (app::SeparationMapModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB5CF0, void, ctor, (app::SeparationMapModifier * this_ptr))
} // namespace app::classes::SeparationMapModifier
