#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Race::LeaderBoardService {
    IL2CPP_REGISTER_METHOD(0x00C430B0, float, GetPlayerTime, (app::LeaderBoardService * this_ptr, app::String* race_name, app::RaceSettings* race_settings, app::ReplayValidatorData* validator_data))
    IL2CPP_REGISTER_METHOD(0x00C433C0, bool, HasScore, (app::LeaderBoardService * this_ptr, app::String* race_name))
    IL2CPP_REGISTER_METHOD(0x00C435C0, bool, HasScores, (app::LeaderBoardService * this_ptr, app::String* race_name))
    IL2CPP_REGISTER_METHOD(0x00C43670, bool, InTop, (app::LeaderBoardService * this_ptr, app::String* race_name, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x00C43A60, float, GetBestTime, (app::LeaderBoardService * this_ptr, app::String* race_name))
    IL2CPP_REGISTER_METHOD(0x00C43B90, void, UploadReplay_1, (app::LeaderBoardService * this_ptr, app::String* race_id, float duration, app::String* replay_data, app::ITrialData* trial_data))
    IL2CPP_REGISTER_METHOD(0x00C43D90, bool, UploadReplay_2, (app::LeaderBoardService * this_ptr, app::String* race_id, float duration, app::String* replay_data, app::ReplayValidatorData* data))
    IL2CPP_REGISTER_METHOD(0x00C43F70, void, ctor, (app::LeaderBoardService * this_ptr))
} // namespace app::classes::Moon::Race::LeaderBoardService
