#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::UpaException {
    IL2CPP_REGISTER_METHOD(0x01ABDB90, void, ctor, (app::UpaException * this_ptr, app::Object * particle1, app::Object * particle2))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Object *, get_Particle1, (app::UpaException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::Object *, get_Particle2, (app::UpaException * this_ptr))
}
