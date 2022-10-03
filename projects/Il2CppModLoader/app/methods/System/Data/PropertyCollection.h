#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::PropertyCollection {
    IL2CPP_REGISTER_METHOD(0x01E49380, void, ctor_1, (app::PropertyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E493A0, void, ctor_2, (app::PropertyCollection * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E493C0, app::Object*, Clone, (app::PropertyCollection * this_ptr))
} // namespace app::classes::System::Data::PropertyCollection
