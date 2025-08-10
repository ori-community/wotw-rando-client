#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinLevel.h>

namespace app::classes::SeinLevel {
    IL2CPP_REGISTER_METHOD(0x010226C0, int32_t, get_Experience, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01022780, void, set_Experience, app::SeinLevel* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01022850, int32_t, get_Ore, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01022910, void, set_Ore, app::SeinLevel* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x010229E0, int32_t, get_PartialHealthContainers, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01022AA0, void, set_PartialHealthContainers, app::SeinLevel* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01022B70, int32_t, get_PartialEnergyContainers, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01022C30, void, set_PartialEnergyContainers, app::SeinLevel* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01022D00, int32_t, get_ExperienceNeedForNextLevel, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01022D30, float, get_ExperienceVisualMinNormalized, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01022D60, float, get_ExperienceVisualMaxNormalized, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01022D90, int32_t, get_ExperienceForNextLevel, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01022EA0, void, GainExperience, app::SeinLevel* this_ptr, int32_t amount)
    IL2CPP_REGISTER_METHOD(0x01023070, void, GainOre, app::SeinLevel* this_ptr, int32_t amount)
    IL2CPP_REGISTER_METHOD(0x010230C0, void, GainPartialEnergyContainer, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010230D0, void, EmptyPartialEnergyContainer, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010230E0, void, GainPartialHealthContainer, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010230F0, void, EmptyPartialHealthContainer, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01023100, void, FixedUpdate, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01023310, void, LevelUp, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010235C0, void, LoseExperience, app::SeinLevel* this_ptr, int32_t amount)
    IL2CPP_REGISTER_METHOD(0x010236C0, void, LoseOre, app::SeinLevel* this_ptr, int32_t amount)
    IL2CPP_REGISTER_METHOD(0x01023710, void, SetReferenceToSein, app::SeinLevel* this_ptr, app::SeinCharacter* sein)
    IL2CPP_REGISTER_METHOD(0x00E84200, void, GainSkillPoint, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01023730, void, ctor, app::SeinLevel* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::SeinLevel
