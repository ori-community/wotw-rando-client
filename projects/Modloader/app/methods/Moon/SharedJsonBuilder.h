#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SharedJsonBuilder.h>
#include <Modloader/app/structs/JsonBuilder.h>
#include <Modloader/app/structs/SharedJsonBuilder__Boxed.h>

namespace app::classes::Moon::SharedJsonBuilder {
    IL2CPP_REGISTER_METHOD(0x030F1520, app::SharedJsonBuilder, Get, ())
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::SharedJsonBuilder__Boxed * this_ptr, app::JsonBuilder* instance))
    IL2CPP_REGISTER_METHOD(0x00245E30, void, Dispose, (app::SharedJsonBuilder__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030F1B60, void, cctor, ())
} // namespace app::classes::Moon::SharedJsonBuilder
