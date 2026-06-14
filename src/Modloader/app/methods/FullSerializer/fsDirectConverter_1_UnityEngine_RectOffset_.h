#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsData.h>
#include <Modloader/app/structs/fsDirectConverter_1_UnityEngine_RectOffset_.h>
#include <Modloader/app/structs/fsResult.h>

namespace app::classes::FullSerializer::fsDirectConverter_1_UnityEngine_RectOffset_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::fsDirectConverter_1_UnityEngine_RectOffset_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x019E6130,
        app::fsResult,
        TrySerialize,
        app::fsDirectConverter_1_UnityEngine_RectOffset_* this_ptr,
        app::Object* instance,
        app::fsData** serialized,
        app::Type* storage_type
    )
    IL2CPP_REGISTER_METHOD(
        0x019E6410,
        app::fsResult,
        TryDeserialize,
        app::fsDirectConverter_1_UnityEngine_RectOffset_* this_ptr,
        app::fsData* data,
        app::Object** instance,
        app::Type* storage_type
    )
    IL2CPP_REGISTER_METHOD(0x019E6080, app::Type*, get_ModelType, app::fsDirectConverter_1_UnityEngine_RectOffset_* this_ptr)
} // namespace app::classes::FullSerializer::fsDirectConverter_1_UnityEngine_RectOffset_
