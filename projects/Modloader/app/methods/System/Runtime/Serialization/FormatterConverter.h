#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FormatterConverter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Serialization::FormatterConverter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FormatterConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D88010, app::Object*, Convert, app::FormatterConverter* this_ptr, app::Object* value, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01D88120, bool, ToBoolean, app::FormatterConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01D88230, int32_t, ToInt32, app::FormatterConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01D88340, int64_t, ToInt64, app::FormatterConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01D88450, float, ToSingle, app::FormatterConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01D88560, app::String*, ToString, app::FormatterConverter* this_ptr, app::Object* value)
} // namespace app::classes::System::Runtime::Serialization::FormatterConverter
