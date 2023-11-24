#include <api/system/message_provider.h>
#include <core.h>
#include <enums/static_text_entries.h>
#include <text/text_database.h>

#include <Common/ext.h>

#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>

#include <unordered_map>

namespace core::text {
    struct TextEntry {
        std::vector<std::string> text;
    };

    // Start dynamic entries after all static values.
    int next_text_id = static_cast<int>(StaticTextEntry::STATIC_TEXT_ENTRY_END) + 1;
    std::unordered_map<int, TextEntry> text_entries;
    std::unordered_map<int, int> dynamic_to_index;

    void initialize_shop_slot(int slot) {
        register_text(slot, "Empty");
        register_text(slot + 1, " ");
        register_text(slot + 2, "Locked");
        register_text(slot + 3, " ");
        register_text(slot + 4, "Undiscovered");
        register_text(slot + 5, "What could it be?");
    }

    void reset_static_entries() {
        register_text(*static_text_entry::Empty, " ");
        register_text(*static_text_entry::EmptyName, "Empty");

        register_text(
            *static_text_entry::LupoWillowSalesPitch,
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

        register_text(*static_text_entry::QuestReward, "Well, it's randomized");
        register_text(*static_text_entry::QuestReward, "Ask Shriek");
        register_text(*static_text_entry::QuestReward, "OriThink");
        register_text(*static_text_entry::QuestReward, "Nobody knows");
        register_text(*static_text_entry::QuestReward, "Only one way to find out...");
        register_text(*static_text_entry::QuestReward, "Probably nothing, maybe something");
        register_text(*static_text_entry::QuestReward, "Something");
        register_text(*static_text_entry::QuestMissingKeyStep0, "Talk to Tokk near the Keystone");
        register_text(*static_text_entry::QuestHandToHandStep0, "Meet a Moki near where you fought Hornbug");
        register_text(*static_text_entry::QuestTreeKeeperStep0, "Meet the Tree Keeper in the Silent Woods");

        register_text(*static_text_entry::Chatter, "Nice, isn't it?");
        register_text(*static_text_entry::Chatter, "Very shiny");
        register_text(*static_text_entry::Chatter, "One of my favorites");
        register_text(*static_text_entry::Chatter, "I've always loved these");
        register_text(*static_text_entry::Chatter, "Popular among the Moki");
        register_text(*static_text_entry::Chatter, "A crowd favorite");
        register_text(*static_text_entry::Chatter, "Seems kind of useless");
        register_text(*static_text_entry::Chatter, "I guess someone could use this?");
        register_text(*static_text_entry::Chatter, "I found this nearby");
        register_text(*static_text_entry::Chatter, "Traded for this from a Moki");
        register_text(*static_text_entry::Chatter, "Grom said he's never\nseen one of these");
        register_text(*static_text_entry::Chatter, "Grom loves these");
        register_text(*static_text_entry::Chatter, "Tokk gave me this");
        register_text(*static_text_entry::Chatter, "Lupo found this while\nexploring the Wellspring");
        register_text(*static_text_entry::Chatter, "Lupo found this deep\nin Inkwater Marsh");
        register_text(*static_text_entry::Chatter, "Lupo found this under\nthe big statue of Kwolok");
        register_text(*static_text_entry::Chatter, "Lupo found this floating\nin Luma Pools");
        register_text(*static_text_entry::Chatter, "It's dangerous to go alone");
        register_text(*static_text_entry::Chatter, "It's fresh!");
        register_text(*static_text_entry::Chatter, "Hot item!");
        register_text(*static_text_entry::Chatter, "Found this in the Midnight Burrows");
        register_text(*static_text_entry::Chatter, "Fresh out of Nibel!");
        register_text(*static_text_entry::Chatter, "I have no idea where this came from");
        register_text(*static_text_entry::Chatter, "Not really sure what this is for");
        register_text(*static_text_entry::Chatter, "You can use this, right?");
        register_text(*static_text_entry::Chatter, "Selling this one at a loss");
        register_text(*static_text_entry::Chatter, "Caveat emptor!");
        register_text(*static_text_entry::Chatter, "Heh");
        register_text(*static_text_entry::Chatter, "Look...");
        register_text(*static_text_entry::Chatter, "Don't worry about it");
        register_text(*static_text_entry::Chatter, "I used to give out\ncoupons for these");
        register_text(*static_text_entry::Chatter, "Take it, please");
        register_text(*static_text_entry::Chatter, "I think Howl coughed\nthis thing up");
        register_text(*static_text_entry::Chatter, "Found it in Shriek's um... leavings");
        register_text(*static_text_entry::Chatter, "Don't forget to take a picture\nfor social media");
        register_text(*static_text_entry::Chatter, "9/10 dentists recommend this");
        register_text(*static_text_entry::Chatter, "This one's good luck");
        register_text(*static_text_entry::Chatter, "Better than a bowl of Marshclam Soup");

        register_text(*static_text_entry::Currency, "Spirit Light");
        register_text(*static_text_entry::Currency, "Gallons");
        register_text(*static_text_entry::Currency, "Spirit Bucks");
        register_text(*static_text_entry::Currency, "Gold");
        register_text(*static_text_entry::Currency, "Geo");
        register_text(*static_text_entry::Currency, "EXP");
        register_text(*static_text_entry::Currency, "Experience");
        register_text(*static_text_entry::Currency, "XP");
        register_text(*static_text_entry::Currency, "Gil");
        register_text(*static_text_entry::Currency, "GP");
        register_text(*static_text_entry::Currency, "Dollars");
        register_text(*static_text_entry::Currency, "Tokens");
        register_text(*static_text_entry::Currency, "Tickets");
        register_text(*static_text_entry::Currency, "Pounds Sterling");
        register_text(*static_text_entry::Currency, "Brownie Points");
        register_text(*static_text_entry::Currency, "Euros");
        register_text(*static_text_entry::Currency, "Credits");
        register_text(*static_text_entry::Currency, "Bells");
        register_text(*static_text_entry::Currency, "Fish");
        register_text(*static_text_entry::Currency, "Zenny");
        register_text(*static_text_entry::Currency, "Pesos");
        register_text(*static_text_entry::Currency, "Exalted Orbs");
        register_text(*static_text_entry::Currency, "Hryvnia");
        register_text(*static_text_entry::Currency, "Poké");
        register_text(*static_text_entry::Currency, "Glod");
        register_text(*static_text_entry::Currency, "Dollerydoos");
        register_text(*static_text_entry::Currency, "Boonbucks");
        register_text(*static_text_entry::Currency, "Pieces of Eight");
        register_text(*static_text_entry::Currency, "Shillings");
        register_text(*static_text_entry::Currency, "Farthings");
        register_text(*static_text_entry::Currency, "Kalganids");
        register_text(*static_text_entry::Currency, "Quatloos");
        register_text(*static_text_entry::Currency, "Crowns");
        register_text(*static_text_entry::Currency, "Solari");
        register_text(*static_text_entry::Currency, "Widgets");
        register_text(*static_text_entry::Currency, "Ori Money");
        register_text(*static_text_entry::Currency, "Money");
        register_text(*static_text_entry::Currency, "Cash");
        register_text(*static_text_entry::Currency, "Munny");
        register_text(*static_text_entry::Currency, "Nuyen");
        register_text(*static_text_entry::Currency, "Rings");
        register_text(*static_text_entry::Currency, "Rupees");
        register_text(*static_text_entry::Currency, "Coins");
        register_text(*static_text_entry::Currency, "Echoes");
        register_text(*static_text_entry::Currency, "Sovereigns");
        register_text(*static_text_entry::Currency, "Points");
        register_text(*static_text_entry::Currency, "Drams");
        register_text(*static_text_entry::Currency, "Doubloons");
        register_text(*static_text_entry::Currency, "Spheres");
        register_text(*static_text_entry::Currency, "Silver");
        register_text(*static_text_entry::Currency, "Slivers");
        register_text(*static_text_entry::Currency, "Rubies");
        register_text(*static_text_entry::Currency, "Emeralds");
        register_text(*static_text_entry::Currency, "Notes");
        register_text(*static_text_entry::Currency, "Yen");
        register_text(*static_text_entry::Currency, "Złoty");
        register_text(*static_text_entry::Currency, "Likes");
        register_text(*static_text_entry::Currency, "Comments");
        register_text(*static_text_entry::Currency, "Subs");
        register_text(*static_text_entry::Currency, "Bananas");
        register_text(*static_text_entry::Currency, "Sapphires");
        register_text(*static_text_entry::Currency, "Diamonds");
        register_text(*static_text_entry::Currency, "Fun");
        register_text(*static_text_entry::Currency, "Minerals");
        register_text(*static_text_entry::Currency, "Vespine Gas");
        register_text(*static_text_entry::Currency, "Sheep");
        register_text(*static_text_entry::Currency, "Brick");
        register_text(*static_text_entry::Currency, "Wheat");
        register_text(*static_text_entry::Currency, "Wood");
        register_text(*static_text_entry::Currency, "Quills");
        register_text(*static_text_entry::Currency, "Bits");
        register_text(*static_text_entry::Currency, "Bytes");
        register_text(*static_text_entry::Currency, "Nuts");
        register_text(*static_text_entry::Currency, "Bolts");
        register_text(*static_text_entry::Currency, "Souls");
        register_text(*static_text_entry::Currency, "Runes");
        register_text(*static_text_entry::Currency, "Pons");
        register_text(*static_text_entry::Currency, "Boxings");
        register_text(*static_text_entry::Currency, "Stonks");
        register_text(*static_text_entry::Currency, "Leaves");
        register_text(*static_text_entry::Currency, "Marbles");
        register_text(*static_text_entry::Currency, "Stamps");
        register_text(*static_text_entry::Currency, "Hugs");
        register_text(*static_text_entry::Currency, "Nobles");
        register_text(*static_text_entry::Currency, "Socks");
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        reset_static_entries();
    });

    app::MessageProvider* get_provider(TextEntry& entry) {
        return core::api::system::create_message_provider(entry.text);
    }

    void register_text(text_id id, std::string_view text) {
        auto& entry = text_entries[id];
        entry.text.emplace_back(text);
    }

    void register_text(text_id id, std::wstring_view text) {
        register_text(id, convert_wstring_to_string(text));
    }

    void clear_text(text_id id) {
        auto& entry = text_entries[id];
        entry.text.clear();
        auto provider = get_provider(entry);
        if (provider != nullptr) {
            il2cpp::invoke(reinterpret_cast<app::TranslatedMessageProvider*>(provider)->fields.Messages, "Clear");
        }
    }

    bool has_text(text_id id) {
        return get_text_count(id) > 0;
    }

    int get_text_count(text_id id) {
        auto& entry = text_entries[id];
        return static_cast<int>(entry.text.size());
    }

    std::string_view get_text(text_id id, int i) {
        auto& entry = text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        return entry.text.at(i);
    }

    std::wstring get_text_w(text_id id, int i) {
        // Can't return a wstring_view here as we are converting the data so it would get destroyed as we returned.
        auto& entry = text_entries[id];
        if (entry.text.empty()) {
            return L"";
        }

        return convert_string_to_wstring(entry.text.at(i));
    }

    std::vector<std::string> const& get_all_text(text_id id) {
        auto& entry = text_entries[id];
        return entry.text;
    }

    std::string get_concatenated_text(text_id id, std::string_view delimiter) {
        std::string text;
        auto& entry = text_entries[id];
        for (auto& text_entry : entry.text) {
            if (!text.empty()) {
                text += delimiter;
            }

            text += text_entry;
        }

        return text;
    }

    std::string_view get_random_text(text_id id) {
        auto& entry = text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        int index = core::random(0, static_cast<int>(entry.text.size() - 1));
        return entry.text[index];
    }

    std::string_view get_random_text_with_hash(text_id id, std::size_t hash) {
        auto& entry = text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        const auto index = hash % entry.text.size();
        return entry.text[index];
    }

    app::MessageProvider* get_provider(text_id id, int i) {
        auto& entry = text_entries[id];
        const auto text = entry.text.empty() ? "" : entry.text[i];
        return core::api::system::create_message_provider(text);
    }

    app::MessageProvider* get_random_provider(text_id id) {
        auto& entry = text_entries[id];
        int index = entry.text.empty() ? 0 : core::random(0, static_cast<int>(entry.text.size() - 1));
        return get_provider(id, index);
    }

    int allocate_dynamic() {
        return next_text_id++;
    }

    void clear_dynamic() {
        for (auto i = static_cast<text_id>(core::StaticTextEntry::STATIC_TEXT_ENTRY_END) + 1; i < next_text_id; ++i) {
            clear_text(i);
        }

        dynamic_to_index.clear();
        next_text_id = static_cast<int>(core::StaticTextEntry::STATIC_TEXT_ENTRY_END) + 1;
    }
} // namespace core::text
