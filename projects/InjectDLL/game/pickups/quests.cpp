#include <Common/ext.h>
#include <Il2CppModLoader/app/methods/Quest.h>
#include <Il2CppModLoader/app/methods/QuestsController.h>
#include <Il2CppModLoader/app/methods/RaceHandler.h>
#include <Il2CppModLoader/app/methods/RuntimeQuest.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>

#include "pickups.h"

using namespace modloader;
using namespace modloader::win;
using namespace app::methods;

namespace game::pickups::quests {
    bool allow_changing_active_quest = false;

    namespace {
        // noop only - reward triggers on uberstate change.
        IL2CPP_INTERCEPT(QuestsController, void, ApplyReward, (app::QuestsController * this_ptr, app::QuestReward* reward)) {}
        IL2CPP_INTERCEPT(RaceHandler, void, ApplyReward, (app::RaceHandler * this_ptr)) {}

        // Mark all main and side quests as Assigned by default
        IL2CPP_INTERCEPT(RuntimeQuest, app::Quest_QuestState__Enum, get_State, (app::RuntimeQuest * this_ptr)) {
            auto result = next::RuntimeQuest::get_State(this_ptr);

            if (
                    this_ptr->fields.m_stateOffset == 0 &&
                    this_ptr->fields.Type != app::Quest_QuestType__Enum::Rumor &&
                    result == app::Quest_QuestState__Enum::Unassigned
            ) {
                result = app::Quest_QuestState__Enum::Assigned;
            }

            return result;
        }

        IL2CPP_INTERCEPT(QuestsController, void, set_ActiveRuntimeQuest, (app::QuestsController * this_ptr, app::RuntimeQuest* runtime_quest)) {
            if (allow_changing_active_quest) {
                next::QuestsController::set_ActiveRuntimeQuest(this_ptr, runtime_quest);
            }
        }

        IL2CPP_INTERCEPT(QuestsController, void, SetActiveQuest, (app::QuestsController * this_ptr, app::RuntimeQuest* runtime_quest, bool with_sound)) {
            if (allow_changing_active_quest) {
                next::QuestsController::SetActiveQuest(this_ptr, runtime_quest, with_sound);
            }
        }

        template <typename T>
        void send_state(T* state) {
            if (state == nullptr)
                return;

            auto csname = il2cpp::invoke<app::String>(state, "get_Name");
            auto name = il2cpp::convert_csstring(csname);
            auto id = state->fields._.m_id->fields.m_id;
            auto value = state->fields.m_value;
            auto group_id = state->fields.Group->fields._.m_id->fields.m_id;
            auto csgroup = il2cpp::invoke<app::String>(state->fields.Group, "get_GroupName");
            auto group_name = il2cpp::convert_csstring(csgroup);
            console::console_send(format("quest: '%s' { %d } '%s' { %d } : %d", name.c_str(), id, group_name.c_str(), group_id, value));
        }

        bool quest_reporting = false;
        IL2CPP_INTERCEPT(QuestsController, void, CompleteQuest, (app::QuestsController * this_ptr, app::Quest* quest)) {
            if (quest_reporting) {
                auto uber_state = Quest::get_UberState(quest);
                auto cast_uber_state = il2cpp::safe_il2cpp_cast<app::SerializedIntUberState>(uber_state, "Moon", "SerializedIntUberState");
                if (cast_uber_state != nullptr && cast_uber_state->fields._.m_id != nullptr && cast_uber_state->fields.Group != nullptr)
                    send_state(cast_uber_state);
            }

            next::QuestsController::CompleteQuest(this_ptr, quest);
        }

        void report_quests_completed(std::string const& command, std::vector<console::CommandParam> const& params) {
            if (params.size() > 1) {
                console::console_send("report_quests_completed only takes 1 or less parameters.");
                return;
            }

            auto value = !quest_reporting;
            if (!params.empty()) {
                if (!params.front().name.empty()) {
                    console::console_send("report_quests_completed unexpected named parameter.");
                    return;
                }

                if (!console::try_get_bool(params.front(), value)) {
                    console::console_send("report_quests_completed invalid parameter.");
                    return;
                }
            }

            console::console_send(format("quest_reporting set to %d.", value));
            quest_reporting = value;
        }

        void report_world_state(std::string const& command, std::vector<console::CommandParam> const& params) {
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

        void add_quest_commands() {
            console::register_command({ "debug", "report_quests_completed" }, report_quests_completed);
            console::register_command({ "debug", "report_world_state" }, report_world_state);
        }

        CALL_ON_INIT(add_quest_commands);
    } // namespace

    void set_allow_changing_active_quest(bool allow) {
        allow_changing_active_quest = allow;
    }
} // namespace game::pickups::quests