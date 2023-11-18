#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ErrorEventArgs.h>
#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Serialization::ErrorEventArgs {
    IL2CPP_REGISTER_METHOD(0x0186BD30, void, ctor, (app::ErrorEventArgs * this_ptr, app::Object* current_object, app::ErrorContext* error_context))
}
