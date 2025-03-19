#include <Core/api/system/message_provider.h>
#include <Core/core.h>
#include <Core/enums/static_text_entries.h>
#include <Core/text/text_database.h>
#include <Core/property/reactivity.h>
#include <Core/save_meta/save_meta.h>

#include <Common/ext.h>

#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

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
        std::unordered_map<text_id, TextEntry> text_entries;

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

    void initialize_shop_slot(const int slot) {
        register_text(static_cast<text_id>(slot), "Empty");
        register_text(static_cast<text_id>(slot + 1), " ");
        register_text(static_cast<text_id>(slot + 2), "Locked");
        register_text(static_cast<text_id>(slot + 3), " ");
        register_text(static_cast<text_id>(slot + 4), "Undiscovered");
        register_text(static_cast<text_id>(slot + 5), "What could it be?");
    }

    void reset_to_default_values() {
        text_data->text_entries.clear();

        register_text(text_id::Empty, " ");
        register_text(text_id::EmptyName, "Empty");

        register_text(
            text_id::LupoWillowSalesPitch,
            "Given the circumstances I would usually give you this for free,\n"
            "but a speedrunner has got to eat...  [AreaMapCost] #Spirit Light#[SpiritLight]"
        );

        // Opher shop slots
        for (auto slot = 0; slot < 12; ++slot) {
            initialize_shop_slot(13000 + (slot * 10));
        }

        // Twillen shop slots
        for (auto slot = 0; slot < 8; ++slot) {
            initialize_shop_slot(14000 + (slot * 10));
        }

        // Lupo shop slots
        for (auto slot = 0; slot < 3; ++slot) {
            initialize_shop_slot(10000 + (slot * 10));
        }

        // Grom shop slots
        for (auto slot = 0; slot < 7; ++slot) {
            initialize_shop_slot(11000 + (slot * 10));
        }

        // Tuley shop slots
        for (auto slot = 0; slot < 6; ++slot) {
            initialize_shop_slot(12000 + (slot * 10));
        }

        register_text(text_id::QuestReward, "Well, it's randomized");
        register_text(text_id::QuestReward, "Ask Shriek");
        register_text(text_id::QuestReward, "OriThink");
        register_text(text_id::QuestReward, "Nobody knows");
        register_text(text_id::QuestReward, "Only one way to find out...");
        register_text(text_id::QuestReward, "Probably nothing, maybe something");
        register_text(text_id::QuestReward, "Something");
        register_text(text_id::QuestMissingKeyStep0, "Talk to Tokk near the Keystone");
        register_text(text_id::QuestHandToHandStep0, "Meet a Moki near where you fought Hornbug");
        register_text(text_id::QuestTreeKeeperStep0, "Meet the Tree Keeper in the Silent Woods");

        register_text(text_id::TrialTextReach, " ");
        register_text(text_id::TrialTextDepths, " ");
        register_text(text_id::TrialTextMarsh, " ");
        register_text(text_id::TrialTextHollow, " ");
        register_text(text_id::TrialTextPools, " ");
        register_text(text_id::TrialTextWastes, " ");
        register_text(text_id::TrialTextWellspring, " ");
        register_text(text_id::TrialTextWoods, " ");
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        register_slot(SaveMetaSlot::StaticText, SaveMetaSlotPersistence::None, text_data);
        reset_to_default_values();
    });

    app::MessageProvider* get_provider(const TextEntry& entry) {
        return api::system::create_message_provider(entry.text);
    }

    void register_text(const text_id id, std::string_view text) {
        auto& entry = text_data->text_entries[id];
        entry.text.emplace_back(text);
        notify_changed(reactivity::TextDatabaseDependency { id });
    }

    void register_text(const text_id id, const std::wstring_view text) {
        register_text(id, convert_wstring_to_string(std::wstring(text)));
    }

    void clear_text(const text_id id) {
        auto& entry = text_data->text_entries[id];
        entry.text.clear();
        const auto provider = get_provider(entry);
        if (provider != nullptr) {
            il2cpp::invoke(reinterpret_cast<app::TranslatedMessageProvider*>(provider)->fields.Messages, "Clear");
        }
        notify_changed(reactivity::TextDatabaseDependency { id });
    }

    bool has_text(const text_id id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        return get_text_count(id) > 0;
    }

    int get_text_count(const text_id id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        return static_cast<int>(entry.text.size());
    }

    std::string_view get_text(const text_id id, int i) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        return entry.text.at(i);
    }

    std::wstring get_text_w(const text_id id, const int i) {
        notify_used(reactivity::TextDatabaseDependency { id });

        // Can't return a wstring_view here as we are converting the data so it would get destroyed as we returned.
        const auto& entry = text_data->text_entries[id];
        if (entry.text.empty()) {
            return L"";
        }

        return convert_string_to_wstring(entry.text.at(i));
    }

    std::vector<std::string> const& get_all_text(const text_id id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        return entry.text;
    }

    std::string get_concatenated_text(const text_id id, const std::string_view delimiter) {
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

    std::string_view get_random_text(const text_id id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        const int index = random(0, static_cast<int>(entry.text.size() - 1));
        return entry.text[index];
    }

    std::string_view get_random_text_with_hash(const text_id id, const std::size_t hash) {
        notify_used(reactivity::TextDatabaseDependency { id });
        const auto& entry = text_data->text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        const auto index = hash % entry.text.size();
        return entry.text[index];
    }

    app::MessageProvider* get_provider(const text_id id, const int i) {
        notify_used(reactivity::TextDatabaseDependency{id});
        const auto& entry = text_data->text_entries[id];
        const auto text = entry.text.empty() ? "" : entry.text[i];
        return api::system::create_message_provider(text);
    }

    app::MessageProvider* get_random_provider(const text_id id) {
        auto& entry = text_data->text_entries[id];
        int index = entry.text.empty() ? 0 : random(0, static_cast<int>(entry.text.size() - 1));
        return get_provider(id, index);
    }
} // namespace core::text
