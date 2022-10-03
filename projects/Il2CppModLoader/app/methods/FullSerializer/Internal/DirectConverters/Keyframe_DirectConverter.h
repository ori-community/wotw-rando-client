#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::DirectConverters::Keyframe_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x0164F4E0, app::fsResult, DoSerialize, (app::Keyframe_DirectConverter * this_ptr, app::Keyframe model, app::Dictionary_2_System_String_FullSerializer_fsData_* serialized))
    IL2CPP_REGISTER_METHOD(0x0164F730, app::fsResult, DoDeserialize, (app::Keyframe_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Keyframe* model))
    IL2CPP_REGISTER_METHOD(0x0164FA10, app::Object*, CreateInstance, (app::Keyframe_DirectConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x0164FAC0, void, ctor, (app::Keyframe_DirectConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::DirectConverters::Keyframe_DirectConverter
