#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RecordableIdData {
    IL2CPP_REGISTER_METHOD(0x00114C30, void, ctor_1, (app::RecordableIdData__Boxed * this_ptr, app::RecordableType__Enum recordable_type, int64_t id, app::String* asset_guid))
    IL2CPP_REGISTER_METHOD(0x00114C40, void, ctor_2, (app::RecordableIdData__Boxed * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x00114C50, void, Save, (app::RecordableIdData__Boxed * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::Object*, GetAssetFromGuid_1, (app::RecordableIdData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BB70, app::GameObject*, GetAssetFromGuid_2, (app::RecordableIdData__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04746808, RecordableIdData_GetAssetFromGuid_1__MethodInfo)
} // namespace app::classes::RecordableIdData
