#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::Converters::UnityEvent_Converter {
    IL2CPP_REGISTER_METHOD(0x0164AAA0, bool, CanProcess, (app::UnityEvent_Converter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::UnityEvent_Converter * this_ptr, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x0164ABC0, app::fsResult, TryDeserialize, (app::UnityEvent_Converter * this_ptr, app::fsData* data, app::Object** instance, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x0164ACF0, app::fsResult, TrySerialize, (app::UnityEvent_Converter * this_ptr, app::Object* instance, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnityEvent_Converter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::Converters::UnityEvent_Converter
