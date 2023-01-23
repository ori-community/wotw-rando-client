#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Text::EncodingHelper {
    IL2CPP_REGISTER_METHOD(0x02455380, app::Encoding*, get_UTF8Unmarked, ())
    IL2CPP_REGISTER_METHOD(0x024556E0, app::String*, InternalCodePage, (int32_t * code_page))
    IL2CPP_REGISTER_METHOD(0x024556F0, app::Encoding*, GetDefaultEncoding, ())
    IL2CPP_REGISTER_METHOD(0x02455850, app::Object*, InvokeI18N, (app::String * name, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x02455DB0, void, cctor, ())
} // namespace app::classes::System::Text::EncodingHelper
