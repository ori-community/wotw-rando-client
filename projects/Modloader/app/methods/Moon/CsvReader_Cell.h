#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CsvReader_Cell__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::CsvReader_Cell {
    IL2CPP_REGISTER_METHOD(0x0011B1F0, void, ctor, (app::CsvReader_Cell__Boxed * this_ptr, int32_t column, int32_t row, app::String* value))
}
