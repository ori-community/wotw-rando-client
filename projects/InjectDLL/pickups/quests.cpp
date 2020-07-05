#include <common.h>
#include <dev/dev_commands.h>
#include <dll_main.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <Common/ext.h>

#include "pickups.h"

namespace
{
    //noop only - reward triggers on uberstate change.
    INTERCEPT(11712560, void, QuestsController__ApplyReward, (app::QuestsController * this_ptr, app::QuestReward * reward)) {}
    INTERCEPT(12110000, void, RaceHandler__ApplyReward, (app::RaceHandler* this_ptr)) {}

    INTERCEPT(11697904, void, QuestNodeWisps__ApplyReward, (app::QuestNodeWisps* this_ptr)) {
        collecting_pickup = true;
        QuestNodeWisps__ApplyReward(this_ptr);
        collecting_pickup = false;      
    }

    BINDING(13431104, app::String*, Moon_UberState__get_Name, (app::IUberState* this_ptr));
    BINDING(13431104, app::String*, Moon_UberStateGroup__get_GroupName, (app::UberStateGroup* this_ptr));
    BINDING(11674320, app::IGenericUberState*, Quest__get_UberState, (app::Quest* this_ptr));

    template<typename T>
    void send_state(T* state)
    {
        if (state == nullptr)
            return;

        auto name = convert_csstring(Moon_UberState__get_Name(reinterpret_cast<app::IUberState*>(state)));
        auto id = state->fields._.m_id->fields.m_id;
        auto value = state->fields.m_value;
        auto group_id = state->fields.Group->fields._.m_id->fields.m_id;
        auto group_name = convert_csstring(Moon_UberStateGroup__get_GroupName(state->fields.Group));
        dev::console_send(format("quest: '%s' { %d } '%s' { %d } : %d", name.c_str(), id, group_name.c_str(), group_id, value));
    }

    bool quest_reporting = false;
    INTERCEPT(11715888, void, QuestsController__CompleteQuest, (app::QuestsController* this_ptr, app::Quest* quest)) {
        if (quest_reporting)
        {
            auto uber_state = Quest__get_UberState(quest);
            auto cast_uber_state = il2cpp::safe_il2cpp_cast<app::SerializedIntUberState>(uber_state, "Moon", "SerializedIntUberState");
            if (cast_uber_state != nullptr && cast_uber_state->fields._.m_id != nullptr && cast_uber_state->fields.Group != nullptr)
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
        auto sein_world_state = il2cpp::get_class<app::SeinWorldState__Class>("", "SeinWorldState");
        auto state = sein_world_state->static_fields->Instance;
        send_state(state->fields.ForlornRuinsKey);
        send_state(state->fields.GinsoTreeKey);
        send_state(state->fields.MountHoruKey);
        send_state(state->fields.WaterPurified);
        send_state(state->fields.WarmthReturned);
        send_state(state->fields.GinsoTreeEntered);
        send_state(state->fields.MistLifted);
        send_state(state->fields.WindRestored);
        send_state(state->fields.GumoFree);
        send_state(state->fields.GravityActivated);
        send_state(state->fields.SpiritTreeReached);
        send_state(state->fields.DarknessLifted);
        send_state(state->fields.KwolokDead);
        send_state(state->fields.FindKuQuest);
        send_state(state->fields.WatermillQuest);
        send_state(state->fields.KwolokNpc);
        send_state(state->fields.SwampIntroVignetteFinished);
        send_state(state->fields.TheElderQuest);
        send_state(state->fields.MouldwoodWispQuest);
        send_state(state->fields.LagoonWispQuest);
        send_state(state->fields.DesertWispQuest);
        send_state(state->fields.WinterForestWispQuest);
        send_state(state->fields.BaurNpc);
    }

    void add_quest_commands()
    {
        dev::register_command("report_quests_completed", report_quests_completed);
        dev::register_command("report_world_state", report_world_state);
    }

    CALL_ON_INIT(add_quest_commands);
}
