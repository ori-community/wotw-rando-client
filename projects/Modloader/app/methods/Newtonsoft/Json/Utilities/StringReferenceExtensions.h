#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringReference.h>

namespace app::classes::Newtonsoft::Json::Utilities::StringReferenceExtensions {
    IL2CPP_REGISTER_METHOD(0x03026F90, int32_t, IndexOf, app::StringReference s, char16_t c, int32_t start_index, int32_t length)
    IL2CPP_REGISTER_METHOD(0x03027190, bool, StartsWith, app::StringReference s, app::String* text)
    IL2CPP_REGISTER_METHOD(0x03027230, bool, EndsWith, app::StringReference s, app::String* text)
} // namespace app::classes::Newtonsoft::Json::Utilities::StringReferenceExtensions
