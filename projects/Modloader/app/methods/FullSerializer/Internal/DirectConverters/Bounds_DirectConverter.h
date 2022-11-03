#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::DirectConverters::Bounds_DirectConverter {
    IL2CPP_REGISTER_METHOD(0x0164B690, app::fsResult, DoSerialize, (app::Bounds_DirectConverter * this_ptr, app::Bounds model, app::Dictionary_2_System_String_FullSerializer_fsData_* serialized))
    IL2CPP_REGISTER_METHOD(0x0164B840, app::fsResult, DoDeserialize, (app::Bounds_DirectConverter * this_ptr, app::Dictionary_2_System_String_FullSerializer_fsData_* data, app::Bounds* model))
    IL2CPP_REGISTER_METHOD(0x0164BA30, app::Object*, CreateInstance, (app::Bounds_DirectConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x0164BAE0, void, ctor, (app::Bounds_DirectConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::DirectConverters::Bounds_DirectConverter
