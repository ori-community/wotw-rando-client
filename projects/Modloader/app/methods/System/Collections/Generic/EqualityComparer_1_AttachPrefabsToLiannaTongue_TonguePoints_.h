#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints.h>
#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints__Array.h>
#include <Modloader/app/structs/EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02CBE820, app::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B48D60,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_* this_ptr,
        app::AttachPrefabsToLiannaTongue_TonguePoints__Array* array,
        app::AttachPrefabsToLiannaTongue_TonguePoints value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B48E30,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_* this_ptr,
        app::AttachPrefabsToLiannaTongue_TonguePoints__Array* array,
        app::AttachPrefabsToLiannaTongue_TonguePoints value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B48F00,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B49000,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_
