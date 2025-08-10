#include <Common/ext.h>
#include <Core/enums/text_id.h>
#include <Core/mood_guid.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/Quest.h>
#include <Modloader/app/methods/QuestsController.h>
#include <Modloader/app/methods/RaceHandler.h>
#include <Modloader/app/methods/RuntimeQuest.h>
#include <Modloader/app/methods/System/Collections/Generic/Queue_1_QuestsController_QueuedQuestMessage_.h>
#include <Modloader/app/types/QuestsController.h>
#include <Modloader/app/types/SeinWorldState.h>
#include <Modloader/app/types/SerializedIntUberState.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <unordered_set>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;

namespace randomizer::game::pickups::quests {
    bool allow_changing_active_quest = false;

    namespace {
        enum AddToChainMode {
            NONE,
            PREPEND,
            APPEND,
        };

        struct CustomQuest {
            core::MoodGuid guid;

            int state_offset = 0;

            bool override_name = false;
            text_id name;

            bool override_description = false;
            text_id description;

            bool override_short_description = false;
            text_id short_description;

            AddToChainMode add_to_chain_mode = NONE;

            app::Quest *predicate = nullptr;

            explicit CustomQuest(const core::MoodGuid guid) :
                guid(guid), name(), description(), short_description() {
            }

            CustomQuest(const core::MoodGuid guid, const int state_offset) :
                guid(guid), state_offset(state_offset), name(), description(), short_description() {
            }

            CustomQuest &with_state_offset(const int o) {
                this->state_offset = o;
                return *this;
            }

            CustomQuest &with_name(const text_id n) {
                this->override_name = true;
                this->name = n;
                return *this;
            }

            CustomQuest &with_description(const text_id d) {
                this->override_description = true;
                this->description = d;
                return *this;
            }

            CustomQuest &with_short_description(const text_id d) {
                this->override_short_description = true;
                this->short_description = d;
                return *this;
            }

            CustomQuest &with_descriptions(text_id d) {
                return this->with_description(d).with_short_description(d);
            }

            CustomQuest &chain(const AddToChainMode mode) {
                this->add_to_chain_mode = mode;
                return *this;
            }
        };

        const std::unordered_set<core::MoodGuid> HIDDEN_QUESTS{
            /** "The Will of the Wisps" quests */
            core::MoodGuid(463964177, 1341936715, 1873994928, -499945615),
            core::MoodGuid(1258910534, 1122636955, -1778480234, 133348844),
            core::MoodGuid(-710816118, 1277947377, 319140, -1525452841),
            core::MoodGuid(-268077221, 1202243572, -852566089, 156978670),
            core::MoodGuid(-893057416, 1301390982, 1357684358, 238297567),
            core::MoodGuid(1471999638, 1254990963, -2105615190, 222227120),
            core::MoodGuid(-463711902, 1078475536, -1306081351, -2097288726),
            /** Guardian of the Marsh */
            core::MoodGuid(-261606325, 1116232232, -678406985, 1875250207),
        };

        std::unordered_map<core::MoodGuid, CustomQuest> custom_quests{
            /** The Missing Key */
            {core::MoodGuid(784309430, 1297004301, 1325754012, 600417717),
             CustomQuest(core::MoodGuid(1453348213, -184076870, 1758843589, -1206166881), -1).chain(PREPEND).with_descriptions(core::TextID::QuestMissingKeyStep0)},
            /** Hand to hand */
            {core::MoodGuid(734014019, 1236148109, -842462836, 1209027896),
             CustomQuest(core::MoodGuid(443652096, 862847964, 610815061, 667049562), -1).chain(PREPEND).with_descriptions(core::TextID::QuestHandToHandStep0)},
            /** Tree Keeper */
            {core::MoodGuid(-444299054, 1208119667, 1590309785, -1080834788),
             CustomQuest(core::MoodGuid(-462332515, 714151830, 856820588, 522656270), -1).chain(PREPEND).with_descriptions(core::TextID::QuestTreeKeeperStep0)},
            /** Into the Burrows */
            {core::MoodGuid(1047943550, 1133666609, 582044811, -400025166), CustomQuest(core::MoodGuid(197166750, 30757628, 788233297, -62356085), -1).chain(PREPEND)},
            /** The Lost Compass */
            {core::MoodGuid(2065713802, 1099864302, 1855243427, 699093402), CustomQuest(core::MoodGuid(1930774565, -1930601668, 922713885, -1008795977), -1).chain(PREPEND)},
            /** A Little Braver */
            {core::MoodGuid(1481196127, 1293607637, 981021317, -1136014609), CustomQuest(core::MoodGuid(119446285, -684518850, -1767375534, -68633018), -1).chain(PREPEND)},
            /** Family Reunion */
            {core::MoodGuid(-1601840078, 1103492453, -923271242, 695368384), CustomQuest(core::MoodGuid(905154132, -1027139671, 1339646969, -1918733152), -1).chain(PREPEND)},
            /** A Diamond in the Rough */
            {core::MoodGuid(78890316, 1100833699, -747913560, -481508703), CustomQuest(core::MoodGuid(-1578433137, -457196956, -1785929937, -687959081), -1).chain(PREPEND)},
            /** Into the Darkness */
            {core::MoodGuid(1060260356, 1082605953, -1369924430, -603812624), CustomQuest(core::MoodGuid(-273871809, -1379968594, 1320792014, -961230901), -1).chain(PREPEND)},
            /** Kwolok's Wisdom */
            {core::MoodGuid(1738768222, 1239000801, 1986669468, 2137801590), CustomQuest(core::MoodGuid(1535569408, 50382679, 1649450080, -846359187), -1).chain(PREPEND)},
            /** Regrowing the Glades */
            {core::MoodGuid(-764284553, 1115842333, 1796016546, -1254651281), CustomQuest(core::MoodGuid(-830522577, 1668948132, 909007598, -64179817), -1).chain(PREPEND)},
        };

        // noop only - reward triggers on uberstate change.
        IL2CPP_INTERCEPT(void, QuestsController, ApplyReward, app::QuestsController * this_ptr, app::QuestReward* reward) {
        }

        IL2CPP_INTERCEPT(void, RaceHandler, ApplyReward, app::RaceHandler * this_ptr) {
        }

        app::Quest *make_quest(CustomQuest custom_quest) {
            const auto quest = il2cpp::unity::instantiate_object<app::Quest>(custom_quest.predicate);

            if (custom_quest.override_name) {
                quest->fields.NameMessageProvider = core::text::get_provider(custom_quest.name);
            }

            if (custom_quest.override_description) {
                quest->fields.DescriptionMessageProvider = core::text::get_provider(custom_quest.description);
            }

            if (custom_quest.override_short_description) {
                quest->fields.ShortDescriptionMessageProvider = core::text::get_provider(custom_quest.short_description);
            }

            quest->fields.StateOffset = custom_quest.state_offset;
            quest->fields.OnWelcomeReward = nullptr;
            quest->fields.NonInteractionReward = nullptr;
            quest->fields.OnCompleteReward = nullptr;
            quest->fields._.MoonGuid = custom_quest.guid.to_moon_guid();

            return quest;
        }

        IL2CPP_INTERCEPT(void, QuestsController, Awake, app::QuestsController * this_ptr) {
            const auto quests = this_ptr->fields.Quests;
            std::vector<std::pair<app::Quest *, CustomQuest>> custom_quest_instances;
            for (int i = 0; i < quests->fields._size; ++i) {
                const auto quest = quests->fields._items->vector[i];
                const auto guid = quest->fields._.MoonGuid;
                const auto custom_quest = custom_quests.find(guid);
                if (custom_quest != custom_quests.end()) {
                    custom_quest->second.predicate = quest;
                    auto quest_instance = make_quest(custom_quest->second);
                    il2cpp::invoke(quests, "Insert", &i, quest_instance);
                    ++i;

                    custom_quest_instances.emplace_back(quest_instance, custom_quest->second);
                }
            }

            next::QuestsController::Awake(this_ptr);

            // They automatically remap StateOffset in the Awake method, so we
            // have to correct that and process chaining after initialization.
            for (const auto &[quest, custom_quest]: custom_quest_instances) {
                quest->fields.StateOffset = custom_quest.state_offset;

                if (custom_quest.add_to_chain_mode == AddToChainMode::APPEND) {
                    const auto next_quest = custom_quest.predicate->fields.ChainQuest;
                    custom_quest.predicate->fields.ChainQuest = quest;
                    quest->fields.ChainQuest = next_quest;
                }
                else if (custom_quest.add_to_chain_mode == AddToChainMode::PREPEND) {
                    quest->fields.ChainQuest = custom_quest.predicate;
                }

                const auto runtime_quest = QuestsController::GetRuntimeQuest(this_ptr, quest);
                runtime_quest->fields.m_stateOffset = custom_quest.state_offset;
            }
        }

        // Mark all main and side quests as Assigned by default
        IL2CPP_INTERCEPT(app::Quest_QuestState__Enum, RuntimeQuest, get_State, app::RuntimeQuest * this_ptr) {
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

            if (HIDDEN_QUESTS.contains(this_ptr->fields.MoonGuid)) {
                result = app::Quest_QuestState__Enum::Unassigned;
            }

            return result;
        }

        IL2CPP_INTERCEPT(void, QuestsController, set_ActiveRuntimeQuest, app::QuestsController * this_ptr, app::RuntimeQuest* runtime_quest) {
            if (allow_changing_active_quest) {
                next::QuestsController::set_ActiveRuntimeQuest(this_ptr, runtime_quest);
            }
        }

        IL2CPP_INTERCEPT(void, QuestsController, SetActiveQuest, app::QuestsController * this_ptr, app::RuntimeQuest* runtime_quest, bool with_sound) {
            if (allow_changing_active_quest) {
                next::QuestsController::SetActiveQuest(this_ptr, runtime_quest, with_sound);

                // Display the GUID of the active quest
                //
                // modloader::win::console::console_send(
                //         std::format(
                //                 "%d, %d, %d, %d",
                //                 runtime_quest->fields.MoonGuid->fields.A,
                //                 runtime_quest->fields.MoonGuid->fields.B,
                //                 runtime_quest->fields.MoonGuid->fields.C,
                //                 runtime_quest->fields.MoonGuid->fields.D
                //         )
                // );
            }
        }

        template<typename T>
        void send_state(T *state) {
            if (state == nullptr) {
                return;
            }

            const auto csname = il2cpp::invoke<app::String>(state, "get_Name");
            const auto name = il2cpp::convert_csstring(csname);
            const auto id = state->fields._.m_id->fields.m_id;
            const auto value = state->fields.m_value;
            const auto group_id = state->fields.Group->fields._.m_id->fields.m_id;
            const auto csgroup = il2cpp::invoke<app::String>(state->fields.Group, "get_GroupName");
            const auto group_name = il2cpp::convert_csstring(csgroup);
            console::console_send(std::format("quest: '{}' {{ {} }} '{}' {{ {} }} : {}", name, id, group_name, group_id, value));
        }

        bool quest_reporting = false;
        IL2CPP_INTERCEPT(void, QuestsController, CompleteQuest, app::QuestsController * this_ptr, app::Quest* quest) {
            if (quest_reporting) {
                const auto uber_state = Quest::get_UberState(quest);
                const auto cast_uber_state = il2cpp::safe_il2cpp_cast<app::SerializedIntUberState>(uber_state, types::SerializedIntUberState::get_class());
                if (cast_uber_state != nullptr && cast_uber_state->fields._.m_id != nullptr && cast_uber_state->fields.Group != nullptr) {
                    send_state(cast_uber_state);
                }
            }

            next::QuestsController::CompleteQuest(this_ptr, quest);
        }

        void report_quests_completed(std::string const &command, std::vector<console::CommandParam> const &params) {
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

                if (!try_get_bool(params.front(), value)) {
                    console::console_send("report_quests_completed invalid parameter.");
                    return;
                }
            }

            console::console_send(std::format("quest_reporting set to {}.", value));
            quest_reporting = value;
        }

        void report_world_state(std::string const &command, std::vector<console::CommandParam> const &params) {
            auto sein_world_state = types::SeinWorldState::get_class();
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

        auto on_game_ready = modloader::event_bus().register_handler(
            ModloaderEvent::GameReady,
            [](auto) {
                register_command({"debug", "report_quests_completed"}, report_quests_completed);
                register_command({"debug", "report_world_state"}, report_world_state);
            }
        );

        bool clear_quest_messages_on_next_update = false;
        IL2CPP_INTERCEPT(void, QuestsController, Update, app::QuestsController * this_ptr) {
            if (clear_quest_messages_on_next_update) {
                System::Collections::Generic::Queue_1_QuestsController_QueuedQuestMessage_::Clear(this_ptr->fields.m_queuedQuestMessages);
                clear_quest_messages_on_next_update = false;
            }
        }
    } // namespace

    app::QuestsController *controller() {
        return types::QuestsController::get_class()->static_fields->Instance;
    }

    void set_allow_changing_active_quest(const bool allow) {
        allow_changing_active_quest = allow;
    }

    void clear_queued_quest_messages_on_next_update() {
        clear_quest_messages_on_next_update = true;
    }
} // namespace game::pickups::quests
