#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationMetaData.h>
#include <Modloader/app/structs/AnimationMetaDataCurveProcessor.h>

namespace app::classes::AnimationMetaDataCurveProcessor {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor, app::AnimationMetaDataCurveProcessor* this_ptr, app::AnimationMetaData* animation_meta_data)
    IL2CPP_REGISTER_METHOD(0x004FF900, void, OnPreProcessModel, app::AnimationMetaDataCurveProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00500100, void, OnPostProcessModel, app::AnimationMetaDataCurveProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00500550, void, OnSampleFrame, app::AnimationMetaDataCurveProcessor* this_ptr, int32_t frame)
} // namespace app::classes::AnimationMetaDataCurveProcessor
