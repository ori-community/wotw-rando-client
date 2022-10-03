#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::LocatedActiveAxis {
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Column, (app::LocatedActiveAxis * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016CD900, void, ctor, (app::LocatedActiveAxis * this_ptr, app::Asttree* astfield, app::KeySequence* ks, int32_t column))
    IL2CPP_REGISTER_METHOD(0x016CD940, void, Reactivate, (app::LocatedActiveAxis * this_ptr, app::KeySequence* ks))
} // namespace app::classes::System::Xml::Schema::LocatedActiveAxis
