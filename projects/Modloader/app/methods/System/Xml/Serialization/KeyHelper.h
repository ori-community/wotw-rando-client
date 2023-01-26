#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Xml::Serialization::KeyHelper {
    IL2CPP_REGISTER_METHOD(0x01C8E310, void, AddField_1, (app::StringBuilder * sb, int32_t n, app::String* val))
    IL2CPP_REGISTER_METHOD(0x01C8E330, void, AddField_2, (app::StringBuilder * sb, int32_t n, app::String* val, app::String* def))
    IL2CPP_REGISTER_METHOD(0x01C8E490, void, AddField_3, (app::StringBuilder * sb, int32_t n, bool val))
    IL2CPP_REGISTER_METHOD(0x01C8E4E0, void, AddField_4, (app::StringBuilder * sb, int32_t n, bool val, bool def))
    IL2CPP_REGISTER_METHOD(0x01C8E530, void, AddField_5, (app::StringBuilder * sb, int32_t n, int32_t val, int32_t def))
    IL2CPP_REGISTER_METHOD(0x01C8E650, void, AddField_6, (app::StringBuilder * sb, int32_t n, app::Type* val))
} // namespace app::classes::System::Xml::Serialization::KeyHelper
