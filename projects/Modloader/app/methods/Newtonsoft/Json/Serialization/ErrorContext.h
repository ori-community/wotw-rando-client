#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Serialization::ErrorContext {
    IL2CPP_REGISTER_METHOD(0x0186BD10, void, ctor, (app::ErrorContext * this_ptr, app::Object* original_object, app::Object* member, app::String* path, app::Exception* error))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Traced, (app::ErrorContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Traced, (app::ErrorContext * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Exception*, get_Error, (app::ErrorContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_Handled, (app::ErrorContext * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Serialization::ErrorContext
