#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ITrialData.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/ReplayValidatorData.h>
#include <Modloader/app/structs/ReplayValidator_ValidReason.h>

namespace app::classes::Moon::Race::ReplayValidator {
    IL2CPP_REGISTER_METHOD(0x00C499E0, bool, IsValid, (app::String * race_id, app::String* replay_data, int32_t score, app::ITrialData* trial_data, app::RaceSettings* race_settings, bool uploading))
    IL2CPP_REGISTER_METHOD(0x00C49AF0, app::ReplayValidator_ValidReason, IsValidReason, (app::String * race_id, app::String* replay_data, int32_t score, app::ReplayValidatorData* validator_data, app::RaceSettings* race_settings, bool uploading))
    IL2CPP_REGISTER_METHOD(0x00C4C170, bool, InfiniteJumpsUsed, (int32_t jump_count, float start_y, app::Nullable_1_UnityEngine_Vector3_ end_pos))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::Moon::Race::ReplayValidator
