#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowQuestEntity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/QuestIconMode__Enum.h>
#include <Modloader/app/structs/ShowQuestEntity_State__Enum.h>

namespace app::classes::Moon::Timeline::ShowQuestEntity {
    IL2CPP_REGISTER_METHOD(0x00D02D50, void, OnEnable, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D02D60, void, Awake, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D02F10, void, OnDestroy, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D02D50, void, OnPostRetoreCheckpoint, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D030C0, void, ClearQuestShownFlag, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D03190, void, ChangeState, (app::ShowQuestEntity * this_ptr, app::ShowQuestEntity_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00D03980, void, SetQuestIcons, (app::ShowQuestEntity * this_ptr, app::QuestIconMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x00D03DD0, bool, CanUpdate, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D03DF0, void, FixedUpdate, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D03E90, void, OnUpdateEntity, (app::ShowQuestEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D04340, void, OnVisibilityChangedCallback, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D04420, void, OnStartPlayback, (app::ShowQuestEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D046E0, void, OnStopPlayback, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D048D0, void, OnMenuClose, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D048F0, bool, HasFinished, (app::ShowQuestEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00D04910, void, ctor, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D049E0, void, _ChangeState_b__15_0, (app::ShowQuestEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D04C80, void, _OnStartPlayback_b__23_0, (app::ShowQuestEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::ShowQuestEntity
