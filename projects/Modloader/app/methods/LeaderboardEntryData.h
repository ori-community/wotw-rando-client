#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LeaderboardEntryData {
    IL2CPP_REGISTER_METHOD(0x015B77D0, int32_t, get_Time, (app::LeaderboardEntryData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B7800, void, set_Time, (app::LeaderboardEntryData * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x015B7840, int32_t, get_DeathCount, (app::LeaderboardEntryData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B7870, void, set_DeathCount, (app::LeaderboardEntryData * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x015B78B0, int32_t, get_CompletionPercentage, (app::LeaderboardEntryData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B78D0, void, set_CompletionPercentage, (app::LeaderboardEntryData * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x015B78F0, void, ctor_1, (app::LeaderboardEntryData * this_ptr, int32_t time, int32_t deaths, int32_t completion))
    IL2CPP_REGISTER_METHOD(0x015B7D20, void, ctor_2, (app::LeaderboardEntryData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8000, int32_t, EncodeExplorer, (app::LeaderboardEntryData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8060, int32_t, DecodeExplorer, (app::LeaderboardEntryData * this_ptr, int32_t data))
    IL2CPP_REGISTER_METHOD(0x015B8100, int32_t, EncodeSpeedRunner, (app::LeaderboardEntryData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8160, void, DecodeSpeedRunner, (app::LeaderboardEntryData * this_ptr, int32_t data))
    IL2CPP_REGISTER_METHOD(0x015B81F0, int32_t, EncodeSurvivor, (app::LeaderboardEntryData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B8250, int32_t, DecodeSurvivor, (app::LeaderboardEntryData * this_ptr, int32_t data))
} // namespace app::classes::LeaderboardEntryData
