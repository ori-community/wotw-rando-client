#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SwaggerCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SwaggerJSONParser.h>

namespace app::classes::SwaggerCallback {
    IL2CPP_REGISTER_METHOD(0x02EA25C0, void, ctor, (app::SwaggerCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EA2710, void, OnResult, (app::SwaggerCallback * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x02EA2820, void, OnError, (app::SwaggerCallback * this_ptr, app::Exception* e))
    IL2CPP_REGISTER_METHOD(0x02EA2AE0, app::SwaggerJSONParser*, get_Parser, (app::SwaggerCallback * this_ptr))
} // namespace app::classes::SwaggerCallback
