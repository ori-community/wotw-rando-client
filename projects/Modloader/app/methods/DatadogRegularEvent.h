#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DatadogRegularEvent.h>

namespace app::classes::DatadogRegularEvent {
    IL2CPP_REGISTER_METHOD(0x02E91080, app::String*, get_Url, (app::DatadogRegularEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E91170, void, ctor, (app::DatadogRegularEvent * this_ptr, app::String* key, app::String* title, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01950620, int32_t, get_UniqueHash, (app::DatadogRegularEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E91370, app::DatadogRegularEvent*, AddTag, (app::DatadogRegularEvent * this_ptr, app::String* key, app::String* value))
} // namespace app::classes::DatadogRegularEvent
