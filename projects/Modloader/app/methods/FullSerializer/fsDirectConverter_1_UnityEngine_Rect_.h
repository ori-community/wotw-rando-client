#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FullSerializer::fsDirectConverter_1_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::fsDirectConverter_1_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047017E0, fsDirectConverter_1_UnityEngine_Rect___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E78F0, app::Type*, get_ModelType, (app::fsDirectConverter_1_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E79A0, app::fsResult, TrySerialize, (app::fsDirectConverter_1_UnityEngine_Rect_ * this_ptr, app::Object* instance, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x019E7C90, app::fsResult, TryDeserialize, (app::fsDirectConverter_1_UnityEngine_Rect_ * this_ptr, app::fsData* data, app::Object** instance, app::Type* storage_type))
} // namespace app::classes::FullSerializer::fsDirectConverter_1_UnityEngine_Rect_
