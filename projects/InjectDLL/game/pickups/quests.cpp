#include "pickups.h"
#include <Common/ext.h>
#include <Il2CppModLoader/app/methods/Quest.h>
#include <Il2CppModLoader/app/methods/QuestsController.h>
#include <Il2CppModLoader/app/methods/RaceHandler.h>
#include <Il2CppModLoader/app/methods/RuntimeQuest.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <enums/static_text_entries.h>
#include <text_database.h>
#include <utils/mood_guid.h>
#include <unordered_set>

using namespace modloader;
using namespace utils;
using namespace modloader::win;
using namespace app::methods;

namespace game::pickups::quests {
    bool allow_changing_active_quest = false;

    namespace {
        struct CustomQuest {
            MoodGuid guid;

            int state_offset = 0;

            bool override_name = false;
            static_text_entry name;

            bool override_description = false;
            static_text_entry description;

            bool override_short_description = false;
            static_text_entry short_description;

            explicit CustomQuest(MoodGuid guid) :
                    guid(guid) {}

            CustomQuest(MoodGuid guid, int state_offset) :
                    guid(guid), state_offset(state_offset) {}

            CustomQuest& with_state_offset(int o) {
                this->state_offset = o;
                return *this;
            }

            CustomQuest& with_name(static_text_entry n) {
                this->override_name = true;
                this->name = n;
                return *this;
            }

            CustomQuest& with_description(static_text_entry d) {
                this->override_description = true;
                this->description = d;
                return *this;
            }

            CustomQuest& with_short_description(static_text_entry d) {
                this->override_short_description = true;
                this->short_description = d;
                return *this;
            }

            CustomQuest& with_descriptions(static_text_entry d) {
                return this->with_description(d).with_short_description(d);
            }
        };

        const std::unordered_set<MoodGuid> hidden_quests{
            /** "The Will of the Wisps" quests */
            MoodGuid(463964177, 1341936715, 1873994928, -499945615),
            MoodGuid(1258910534, 1122636955, -1778480234, 133348844),
            MoodGuid(-710816118, 1277947377, 319140, -1525452841),
            MoodGuid(-268077221, 1202243572, -852566089, 156978670),
            MoodGuid(-893057416, 1301390982, 1357684358, 238297567),
            MoodGuid(1471999638, 1254990963, -2105615190, 222227120),
            MoodGuid(-463711902, 1078475536, -1306081351, -2097288726),
            /** Guardian of the Marsh */
            MoodGuid(-261606325, 1116232232, -678406985, 1875250207),
        };

        const std::unordered_map<MoodGuid, CustomQuest> custom_quests{
            /** The Missing Key */
            { MoodGuid(784309430, 1297004301, 1325754012, 600417717), CustomQuest(MoodGuid(1453348213, -184076870, 1758843589, -1206166881), -1).with_descriptions(text_database::StaticTextEntry::QuestMissingKeyStep0) },
            /** Hand to hand */
            { MoodGuid(734014019, 1236148109, -842462836, 1209027896), CustomQuest(MoodGuid(443652096, 862847964, 610815061, 667049562), -1).with_descriptions(text_database::StaticTextEntry::QuestHandToHandStep0) },
            /** Tree Keeper */
            { MoodGuid(-444299054, 1208119667, 1590309785, -1080834788), CustomQuest(MoodGuid(-462332515, 714151830, 856820588, 522656270), -1).with_descriptions(text_database::StaticTextEntry::QuestTreeKeeperStep0) },
            /** Into the Burrows */
            { MoodGuid(1047943550, 1133666609, 582044811, -400025166), CustomQuest(MoodGuid(197166750, 30757628, 788233297, -62356085), -1) },
            /** The Lost Compass */
            { MoodGuid(2065713802, 1099864302, 1855243427, 699093402), CustomQuest(MoodGuid(1930774565, -1930601668, 922713885, -1008795977), -1) },
            /** A Little Braver */
            { MoodGuid(1481196127, 1293607637, 981021317, -1136014609), CustomQuest(MoodGuid(119446285, -684518850, -1767375534, -68633018), -1) },
            /** Family Reunion */
            { MoodGuid(-1601840078, 1103492453, -923271242, 695368384), CustomQuest(MoodGuid(905154132, -1027139671, 1339646969, -1918733152), -1) },
            /** A Diamond in the Rough */
            { MoodGuid(78890316, 1100833699, -747913560, -481508703), CustomQuest(MoodGuid(-1578433137, -457196956, -1785929937, -687959081), -1) },
            /** Into the Darkness */
            { MoodGuid(1060260356, 1082605953, -1369924430, -603812624), CustomQuest(MoodGuid(-273871809, -1379968594, 1320792014, -961230901), -1) },
            /** Kwolok's Wisdom */
            { MoodGuid(1738768222, 1239000801, 1986669468, 2137801590), CustomQuest(MoodGuid(1535569408, 50382679, 1649450080, -846359187), -1) },
            /** Regrowing the Glades */
            { MoodGuid(-764284553, 1115842333, 1796016546, -1254651281), CustomQuest(MoodGuid(-830522577, 1668948132, 909007598, -64179817), -1) },
        };

        // noop only - reward triggers on uberstate change.
        IL2CPP_INTERCEPT(QuestsController, void, ApplyReward, (app::QuestsController * this_ptr, app::QuestReward* reward)) {}
        IL2CPP_INTERCEPT(RaceHandler, void, ApplyReward, (app::RaceHandler * this_ptr)) {}

        app::Quest* make_quest(app::Quest* predicate, CustomQuest custom_quest) {
            auto quest = il2cpp::unity::instantiate_object<app::Quest>(predicate);

            if (custom_quest.override_name) {
                quest->fields.NameMessageProvider = text_database::get_provider(*custom_quest.name);
            }

            if (custom_quest.override_description) {
                quest->fields.DescriptionMessageProvider = text_database::get_provider(*custom_quest.description);
            }

            if (custom_quest.override_short_description) {
                quest->fields.ShortDescriptionMessageProvider = text_database::get_provider(*custom_quest.short_description);
            }

            quest->fields.ChainQuest = nullptr;
            quest->fields.StateOffset = custom_quest.state_offset;
            quest->fields._.MoonGuid = custom_quest.guid.to_moon_guid();

            return quest;
        }

        IL2CPP_INTERCEPT(QuestsController, void, Awake, (app::QuestsController * this_ptr)) {
            auto quests = this_ptr->fields.Quests;

            std::vector<std::pair<app::Quest*, CustomQuest>> custom_quest_instances;

            for (int i = 0; i < quests->fields._size; ++i) {
                auto quest = quests->fields._items->vector[i];

                auto guid = quest->fields._.MoonGuid;

                auto custom_quest = custom_quests.find(guid);

                if (custom_quest != custom_quests.end()) {
                    auto quest_instance = make_quest(quest, custom_quest->second);
                    il2cpp::invoke(quests, "Insert", &i, quest_instance);
                    ++i;

                    custom_quest_instances.emplace_back(quest_instance, custom_quest->second);
                }
            }

            next::QuestsController::Awake(this_ptr);

            // They automatically remap StateOffset in the Awake method, so we
            // have to correct that.
            for (const auto& item : custom_quest_instances) {
                item.first->fields.StateOffset = item.second.state_offset;

                auto runtime_quest = QuestsController::GetRuntimeQuest(this_ptr, item.first);
                runtime_quest->fields.m_stateOffset = item.second.state_offset;
            }
        }

        // Mark all main and side quests as Assigned by default
        IL2CPP_INTERCEPT(RuntimeQuest, app::Quest_QuestState__Enum, get_State, (app::RuntimeQuest * this_ptr)) {
            auto result = next::RuntimeQuest::get_State(this_ptr);

            //            if (
            //                    this_ptr->fields.m_stateOffset == 0 &&
            //                    this_ptr->fields.Type != app::Quest_QuestType__Enum::Rumor &&
            //                    result == app::Quest_QuestState__Enum::Unassigned
            //            ) {
            //                return app::Quest_QuestState__Enum::Assigned;
            //            }
            //
            //            return app::Quest_QuestState__Enum::Unassigned;

            if (this_ptr->fields.Type == app::Quest_QuestType__Enum::Rumor) {
                return app::Quest_QuestState__Enum::Unassigned;
            }

            if (hidden_quests.contains(this_ptr->fields.MoonGuid)) {
                result = app::Quest_QuestState__Enum::Unassigned;
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

                modloader::win::console::console_send(
                        format(
                                "%d, %d, %d, %d",
                                runtime_quest->fields.MoonGuid->fields.A,
                                runtime_quest->fields.MoonGuid->fields.B,
                                runtime_quest->fields.MoonGuid->fields.C,
                                runtime_quest->fields.MoonGuid->fields.D
                        )
                );
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