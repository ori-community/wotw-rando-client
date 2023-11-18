#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SwaggerJSONParser.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::SwaggerJSONParser {
    IL2CPP_REGISTER_METHOD(0x02EA35E0, app::Object*, GetValue, (app::SwaggerJSONParser * this_ptr, app::Object* filed_value, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SwaggerJSONParser * this_ptr))
} // namespace app::classes::SwaggerJSONParser
