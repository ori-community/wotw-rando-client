#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::DirectConverters::Gradient_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x0164ED90, app::fsResult, DoSerialize, (app::Gradient_DirectConverter * this_ptr, app::Gradient* model, app::Dictionary_2_System_String_FullSerializer_fsData_* serialized))
    IL2CPP_REGISTER_METHOD(0x0164EFC0, app::fsResult, DoDeserialize, (app::Gradient_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Gradient** model))
    IL2CPP_REGISTER_METHOD(0x0164F2E0, app::Object*, CreateInstance, (app::Gradient_DirectConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x0164F460, void, ctor, (app::Gradient_DirectConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::DirectConverters::Gradient_DirectConverter
