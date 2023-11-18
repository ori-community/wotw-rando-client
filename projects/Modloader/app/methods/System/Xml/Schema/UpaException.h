#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UpaException.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Schema::UpaException {
    IL2CPP_REGISTER_METHOD(0x01ABDB90, void, ctor, (app::UpaException * this_ptr, app::Object* particle1, app::Object* particle2))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Object*, get_Particle1, (app::UpaException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::Object*, get_Particle2, (app::UpaException * this_ptr))
} // namespace app::classes::System::Xml::Schema::UpaException
