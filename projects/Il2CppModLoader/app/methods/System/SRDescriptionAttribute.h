#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::SRDescriptionAttribute {
    IL2CPP_REGISTER_METHOD(0x021BC5A0, void, ctor, (app::SRDescriptionAttribute * this_ptr, app::String* description))
    IL2CPP_REGISTER_METHOD(0x021BC650, app::String*, get_Description, (app::SRDescriptionAttribute * this_ptr))
} // namespace app::classes::System::SRDescriptionAttribute
