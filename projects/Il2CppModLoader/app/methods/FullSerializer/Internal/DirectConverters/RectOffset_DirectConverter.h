#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::DirectConverters::RectOffset_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x0164FED0, app::fsResult, DoSerialize, (app::RectOffset_DirectConverter * this_ptr, app::RectOffset* model, app::Dictionary_2_System_String_FullSerializer_fsData_* serialized))
    IL2CPP_REGISTER_METHOD(0x016501E0, app::fsResult, DoDeserialize, (app::RectOffset_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::RectOffset** model))
    IL2CPP_REGISTER_METHOD(0x016506F0, app::Object*, CreateInstance, (app::RectOffset_DirectConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01650870, void, ctor, (app::RectOffset_DirectConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::DirectConverters::RectOffset_DirectConverter
