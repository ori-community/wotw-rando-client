#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Utilities::ValidationUtils {
    IL2CPP_REGISTER_METHOD(0x03028BC0, void, ArgumentNotNull, app::Object* value, app::String* parameter_name)
}
