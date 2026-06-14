#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttachPrefabsToLiannaTongue_TonguePoints.h>
#include <Modloader/app/structs/ComparisonComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_.h>
#include <Modloader/app/structs/Comparison_1_AttachPrefabsToLiannaTongue_TonguePoints_.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_* this_ptr,
        app::Comparison_1_AttachPrefabsToLiannaTongue_TonguePoints_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_* this_ptr,
        app::AttachPrefabsToLiannaTongue_TonguePoints x,
        app::AttachPrefabsToLiannaTongue_TonguePoints y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_AttachPrefabsToLiannaTongue_TonguePoints_
