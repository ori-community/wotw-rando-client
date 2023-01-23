#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StatisticianEntity.h>
#include <Modloader/app/structs/ICharacter.h>

namespace app::classes::StatisticianEntity {
    IL2CPP_REGISTER_METHOD(0x009B7220, app::String*, get_DialogActorName, (app::StatisticianEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B72A0, app::String*, get_InteractionActorName, (app::StatisticianEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B7320, void, OnEnable, (app::StatisticianEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B74E0, void, OnDisable, (app::StatisticianEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B76A0, void, PlayHiddenAnimation, (app::StatisticianEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B7880, bool, ShouldPlayHiddenAnimation, (app::StatisticianEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047578C0, StatisticianEntity_ShouldPlayHiddenAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009B7890, void, OnInteractionEnd, (app::StatisticianEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x009B78D0, void, OnUpdate, (app::StatisticianEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B7920, void, OnHideFinished, (app::StatisticianEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747680, StatisticianEntity_OnHideFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, (app::StatisticianEntity * this_ptr))
} // namespace app::classes::StatisticianEntity
