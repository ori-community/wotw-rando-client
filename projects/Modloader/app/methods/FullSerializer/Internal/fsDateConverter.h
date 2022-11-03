#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::fsDateConverter {
    IL2CPP_REGISTER_METHOD(0x01652370, app::String*, get_DateTimeFormatString, (app::fsDateConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01652420, bool, CanProcess, (app::fsDateConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01652550, app::fsResult, TrySerialize, (app::fsDateConverter * this_ptr, app::Object* instance, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHODINFO(0x0471BE68, fsDateConverter_TrySerialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01652940, app::fsResult, TryDeserialize, (app::fsDateConverter * this_ptr, app::fsData* data, app::Object** instance, app::Type* storage_type))
    IL2CPP_REGISTER_METHODINFO(0x04720180, fsDateConverter_TryDeserialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsDateConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::fsDateConverter
