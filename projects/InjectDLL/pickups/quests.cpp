#include <common.h>
#include <dev/dev_commands.h>
#include <dll_main.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <Common/ext.h>

#include "pickups.h"

namespace
{
    STATIC_CLASS(71441752, SeinWorldState_c*, sein_world_state);
    
    //noop only - reward triggers on uberstate change.
    INTERCEPT(11712560, void, QuestsController__ApplyReward, (QuestsController_o * this_ptr, QuestReward_o * reward)) {}
    INTERCEPT(12110000, void, RaceHandler__ApplyReward, (RaceHandler_o* this_ptr)) {}

    INTERCEPT(11697904, void, QuestNodeWisps__ApplyReward, (QuestNodeWisps_o* this_ptr)) {
        collecting_pickup = true;
        QuestNodeWisps__ApplyReward(this_ptr);
        collecting_pickup = false;      
    }

    BINDING(13431104, System_String_o*, Moon_UberState__get_Name, (Moon_IUberState_o* this_ptr));
    BINDING(13431104, System_String_o*, Moon_UberStateGroup__get_GroupName, (Moon_UberStateGroup_o* this_ptr));
    BINDING(11674320, Moon_IGenericUberState_o*, Quest__get_UberState, (Quest_o* this_ptr));

    template<typename T>
    void send_state(T* state)
    {
        if (state == nullptr)
            return;

        auto name = convert_csstring(Moon_UberState__get_Name(reinterpret_cast<Moon_IUberState_o*>(state)));
        auto id = state->UberIDOwnerSO_m_id->m_id;
        auto value = state->m_value;
        auto group_id = state->Group->UberIDOwnerSO_m_id->m_id;
        auto group_name = convert_csstring(Moon_UberStateGroup__get_GroupName(state->Group));
        dev::console_send(format("quest: '%s' { %d } '%s' { %d } : %d", name.c_str(), id, group_name.c_str(), group_id, value));
    }

    bool quest_reporting = false;
    INTERCEPT(11715888, void, QuestsController__CompleteQuest, (QuestsController_o* this_ptr, Quest_o* quest)) {
        if (quest_reporting)
        {
            auto uber_state = Quest__get_UberState(quest);
            auto cast_uber_state = il2cpp::safe_il2cpp_cast<Moon_SerializedIntUberState_o>(uber_state, "Moon", "SerializedIntUberState");
            if (cast_uber_state != nullptr && cast_uber_state->UberIDOwnerSO_m_id != nullptr && cast_uber_state->Group != nullptr)
                send_state(cast_uber_state);
        }

        QuestsController__CompleteQuest(this_ptr, quest);
    }


    void report_quests_completed(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        if (params.size() > 1)
        {
            dev::console_send("report_quests_completed only takes 1 or less parameters.");
            return;
        }

        auto value = !quest_reporting;
        if (!params.empty())
        {
            if (!params.front().name.empty())
            {
                dev::console_send("report_quests_completed unexpected named parameter.");
                return;
            }
            
            if (!dev::try_get_bool(params.front(), value))
            {
                dev::console_send("report_quests_completed invalid parameter.");
                return;
            }
        }

        dev::console_send(format("quest_reporting set to %d.", value));
        quest_reporting = value;
    }

    void report_world_state(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        SeinWorldState_o* state = (*sein_world_state)->static_fields->Instance;
        send_state(state->ForlornRuinsKey);
        send_state(state->GinsoTreeKey);
        send_state(state->MountHoruKey);
        send_state(state->WaterPurified);
        send_state(state->WarmthReturned);
        send_state(state->GinsoTreeEntered);
        send_state(state->MistLifted);
        send_state(state->WindRestored);
        send_state(state->GumoFree);
        send_state(state->GravityActivated);
        send_state(state->SpiritTreeReached);
        send_state(state->DarknessLifted);
        send_state(state->KwolokDead);
        send_state(state->FindKuQuest);
        send_state(state->WatermillQuest);
        send_state(state->KwolokNpc);
        send_state(state->SwampIntroVignetteFinished);
        send_state(state->TheElderQuest);
        send_state(state->MouldwoodWispQuest);
        send_state(state->LagoonWispQuest);
        send_state(state->DesertWispQuest);
        send_state(state->WinterForestWispQuest);
        send_state(state->BaurNpc);
    }

    void add_quest_commands()
    {
        dev::register_command("report_quests_completed", report_quests_completed);
        dev::register_command("report_world_state", report_world_state);
    }

    CALL_ON_INIT(add_quest_commands);
}
