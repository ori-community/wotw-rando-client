#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::EncodingHelper {
    IL2CPP_REGISTER_METHOD(0x02455380, app::Encoding *, get_UTF8Unmarked, ())
    IL2CPP_REGISTER_METHOD(0x024556E0, app::String *, InternalCodePage, (int32_t * code_page))
    IL2CPP_REGISTER_METHOD(0x024556F0, app::Encoding *, GetDefaultEncoding, ())
    IL2CPP_REGISTER_METHOD(0x02455850, app::Object *, InvokeI18N, (app::String * name, app::Object__Array * args))
    IL2CPP_REGISTER_METHOD(0x02455DB0, void, cctor, ())
}
