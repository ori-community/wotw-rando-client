#include <Core/api/system/message_provider.h>
#include <Core/core.h>
#include <Core/enums/text_id.h>
#include <Core/text/text_database.h>
#include <Core/property/reactivity.h>
#include <Core/save_meta/save_meta.h>

#include <Common/ext.h>

#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

#include <Core/api/game/game.h>
#include <unordered_map>

namespace core::text {

    struct TextEntry {
        std::vector<std::string> text;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            TextEntry,
            text
        );
    };

    class SaveSlotTextMetaData final : public save_meta::JsonSaveMetaSerializable {
    public:
        std::unordered_map<core::TextID, TextEntry> text_entries;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            SaveSlotTextMetaData,
            text_entries
        );

        nlohmann::json json_serialize() override {
            nlohmann::json j = *this;
            return j;
        }

        void json_deserialize(nlohmann::json& j) override {
            j.get_to(*this);
        }
    };

    auto text_data = std::make_shared<SaveSlotTextMetaData>();

    void reset_to_default_values() {
        text_data->text_entries.clear();

        register_text(core::TextID::Empty, " ");
        register_text(core::TextID::EmptyName, "Empty");

        register_text(core::TextID::QuestReward, "Well, it's randomized");
        register_text(core::TextID::QuestReward, "Ask Shriek");
        register_text(core::TextID::QuestReward, "OriThink");
        register_text(core::TextID::QuestReward, "Nobody knows");
        register_text(core::TextID::QuestReward, "Only one way to find out...");
        register_text(core::TextID::QuestReward, "Probably nothing, maybe something");
        register_text(core::TextID::QuestReward, "Something");
        register_text(core::TextID::QuestMissingKeyStep0, "Talk to Tokk near the Keystone");
        register_text(core::TextID::QuestHandToHandStep0, "Meet a Moki near where you fought Hornbug");
        register_text(core::TextID::QuestTreeKeeperStep0, "Meet the Tree Keeper in the Silent Woods");
        register_text(core::TextID::QuestSilentTeethStep0, "Meet Kwolok");

        register_text(core::TextID::TrialTextReach, "");
        register_text(core::TextID::TrialTextDepths, "");
        register_text(core::TextID::TrialTextMarsh, "");
        register_text(core::TextID::TrialTextHollow, "");
        register_text(core::TextID::TrialTextPools, "");
        register_text(core::TextID::TrialTextWastes, "");
        register_text(core::TextID::TrialTextWellspring, "");
        register_text(core::TextID::TrialTextWoods, "");
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        register_slot(SaveMetaSlot::StaticText, SaveMetaSlotPersistence::None, text_data);
        reset_to_default_values();
    });

    auto on_new_game = api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
        reset_to_default_values();
    });

    app::MessageProvider* get_provider(const TextEntry& entry) {
        return api::system::create_message_provider(entry.text);
    }

    void register_text(const core::TextID id, std::string_view text) {
        auto& entry = text_data->text_entries[id];
        entry.text.emplace_back(text);
        notify_changed(reactivity::TextDatabaseDependency { id });
    }

    void register_text(const core::TextID id, const std::wstring_view text) {
        register_text(id, convert_wstring_to_string(std::wstring(text)));
    }

    void clear_text(const core::TextID id) {
        auto& entry = text_data->text_entries[id];
        entry.text.clear();
        const auto provider = get_provider(entry);
        if (provider != nullptr) {
            il2cpp::invoke(reinterpret_cast<app::TranslatedMessageProvider*>(provider)->fields.Messages, "Clear");
        }
        notify_changed(reactivity::TextDatabaseDependency { id });
    }

    bool has_text(const core::TextID id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        return get_text_count(id) > 0;
    }

    int get_text_count(const core::TextID id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        return static_cast<int>(entry.text.size());
    }

    std::string_view get_text(const core::TextID id, int i) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        return entry.text.at(i);
    }

    std::wstring get_text_w(const core::TextID id, const int i) {
        notify_used(reactivity::TextDatabaseDependency { id });

        // Can't return a wstring_view here as we are converting the data so it would get destroyed as we returned.
        const auto& entry = text_data->text_entries[id];
        if (entry.text.empty()) {
            return L"";
        }

        return convert_string_to_wstring(entry.text.at(i));
    }

    std::vector<std::string> const& get_all_text(const core::TextID id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        return entry.text;
    }

    std::string get_concatenated_text(const core::TextID id, const std::string_view delimiter) {
        notify_used(reactivity::TextDatabaseDependency { id });
        std::string text;
        const auto& entry = text_data->text_entries[id];
        for (const auto& text_entry : entry.text) {
            if (!text.empty()) {
                text += delimiter;
            }

            text += text_entry;
        }

        return text;
    }

    std::string_view get_random_text(const core::TextID id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        const int index = random(0, static_cast<int>(entry.text.size() - 1));
        return entry.text[index];
    }

    std::string_view get_random_text_with_hash(const core::TextID id, const std::size_t hash) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        const auto index = hash % entry.text.size();
        return entry.text[index];
    }

    app::MessageProvider* get_provider(const core::TextID id, const int i) {
        notify_used(reactivity::TextDatabaseDependency{id});
        const auto& entry = text_data->text_entries[id];
        const auto text = entry.text.empty() ? "" : entry.text[i];
        return api::system::create_message_provider(text);
    }

    app::MessageProvider* get_random_provider(const core::TextID id) {
        auto& entry = text_data->text_entries[id];
        int index = entry.text.empty() ? 0 : random(0, static_cast<int>(entry.text.size() - 1));
        return get_provider(id, index);
    }
} // namespace core::text
