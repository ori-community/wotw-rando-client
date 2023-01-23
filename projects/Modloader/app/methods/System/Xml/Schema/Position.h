#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Position__Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Schema::Position {
    IL2CPP_REGISTER_METHOD(0x0013C010, void, ctor, (app::Position__Boxed * this_ptr, int32_t symbol, app::Object* particle))
}
