#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SharedJsonParser.h>
#include <Modloader/app/structs/JsonParser.h>
#include <Modloader/app/structs/SharedJsonParser__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::SharedJsonParser {
    IL2CPP_REGISTER_METHOD(0x030F1EC0, app::SharedJsonParser, Get, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::SharedJsonParser__Boxed * this_ptr, app::JsonParser* instance))
    IL2CPP_REGISTER_METHOD(0x00245E60, void, Dispose, (app::SharedJsonParser__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030F2500, void, cctor, ())
} // namespace app::classes::Moon::SharedJsonParser
