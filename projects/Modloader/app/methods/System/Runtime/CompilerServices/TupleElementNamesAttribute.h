#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TupleElementNamesAttribute.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Runtime::CompilerServices::TupleElementNamesAttribute {
    IL2CPP_REGISTER_METHOD(0x01A92FE0, void, ctor, (app::TupleElementNamesAttribute * this_ptr, app::String__Array* transform_names))
}
