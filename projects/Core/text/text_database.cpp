#include <Core/api/system/message_provider.h>
#include <Core/core.h>
#include <Core/enums/static_text_entries.h>
#include <Core/text/text_database.h>
#include <Core/property/reactivity.h>

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

        register_text(*static_text_entry::CurrencyPlural, "Bananas");
        register_text(*static_text_entry::CurrencyPlural, "Bells");
        register_text(*static_text_entry::CurrencyPlural, "Bits");
        register_text(*static_text_entry::CurrencyPlural, "Bolts");
        register_text(*static_text_entry::CurrencyPlural, "Boonbucks");
        register_text(*static_text_entry::CurrencyPlural, "Boxings");
        register_text(*static_text_entry::CurrencyPlural, "Brick");
        register_text(*static_text_entry::CurrencyPlural, "Brownie Points");
        register_text(*static_text_entry::CurrencyPlural, "Bytes");
        register_text(*static_text_entry::CurrencyPlural, "Cash");
        register_text(*static_text_entry::CurrencyPlural, "Coins");
        register_text(*static_text_entry::CurrencyPlural, "Comments");
        register_text(*static_text_entry::CurrencyPlural, "Credits");
        register_text(*static_text_entry::CurrencyPlural, "Crowns");
        register_text(*static_text_entry::CurrencyPlural, "Diamonds");
        register_text(*static_text_entry::CurrencyPlural, "Dollars");
        register_text(*static_text_entry::CurrencyPlural, "Dollerydoos");
        register_text(*static_text_entry::CurrencyPlural, "Doubloons");
        register_text(*static_text_entry::CurrencyPlural, "Drams");
        register_text(*static_text_entry::CurrencyPlural, "Echoes");
        register_text(*static_text_entry::CurrencyPlural, "Emeralds");
        register_text(*static_text_entry::CurrencyPlural, "Euros");
        register_text(*static_text_entry::CurrencyPlural, "Exalted Orbs");
        register_text(*static_text_entry::CurrencyPlural, "EXP");
        register_text(*static_text_entry::CurrencyPlural, "Experience");
        register_text(*static_text_entry::CurrencyPlural, "Farthings");
        register_text(*static_text_entry::CurrencyPlural, "Fish");
        register_text(*static_text_entry::CurrencyPlural, "Fun");
        register_text(*static_text_entry::CurrencyPlural, "Gallons");
        register_text(*static_text_entry::CurrencyPlural, "Geo");
        register_text(*static_text_entry::CurrencyPlural, "Gil");
        register_text(*static_text_entry::CurrencyPlural, "Glod");
        register_text(*static_text_entry::CurrencyPlural, "Gold");
        register_text(*static_text_entry::CurrencyPlural, "GP");
        register_text(*static_text_entry::CurrencyPlural, "Hryvnia");
        register_text(*static_text_entry::CurrencyPlural, "Hugs");
        register_text(*static_text_entry::CurrencyPlural, "Kalganids");
        register_text(*static_text_entry::CurrencyPlural, "Leaves");
        register_text(*static_text_entry::CurrencyPlural, "Likes");
        register_text(*static_text_entry::CurrencyPlural, "Marbles");
        register_text(*static_text_entry::CurrencyPlural, "Minerals");
        register_text(*static_text_entry::CurrencyPlural, "Money");
        register_text(*static_text_entry::CurrencyPlural, "Munny");
        register_text(*static_text_entry::CurrencyPlural, "Nobles");
        register_text(*static_text_entry::CurrencyPlural, "Notes");
        register_text(*static_text_entry::CurrencyPlural, "Nuts");
        register_text(*static_text_entry::CurrencyPlural, "Nuyen");
        register_text(*static_text_entry::CurrencyPlural, "Ori Money");
        register_text(*static_text_entry::CurrencyPlural, "Pesos");
        register_text(*static_text_entry::CurrencyPlural, "Pieces of Eight");
        register_text(*static_text_entry::CurrencyPlural, "Points");
        register_text(*static_text_entry::CurrencyPlural, "Poké");
        register_text(*static_text_entry::CurrencyPlural, "Pons");
        register_text(*static_text_entry::CurrencyPlural, "Pounds Sterling");
        register_text(*static_text_entry::CurrencyPlural, "Quatloos");
        register_text(*static_text_entry::CurrencyPlural, "Quills");
        register_text(*static_text_entry::CurrencyPlural, "Rings");
        register_text(*static_text_entry::CurrencyPlural, "Rubies");
        register_text(*static_text_entry::CurrencyPlural, "Runes");
        register_text(*static_text_entry::CurrencyPlural, "Rupees");
        register_text(*static_text_entry::CurrencyPlural, "Sapphires");
        register_text(*static_text_entry::CurrencyPlural, "Sheep");
        register_text(*static_text_entry::CurrencyPlural, "Shillings");
        register_text(*static_text_entry::CurrencyPlural, "Silver");
        register_text(*static_text_entry::CurrencyPlural, "Slivers");
        register_text(*static_text_entry::CurrencyPlural, "Socks");
        register_text(*static_text_entry::CurrencyPlural, "Solari");
        register_text(*static_text_entry::CurrencyPlural, "Souls");
        register_text(*static_text_entry::CurrencyPlural, "Sovereigns");
        register_text(*static_text_entry::CurrencyPlural, "Spheres");
        register_text(*static_text_entry::CurrencyPlural, "Spirit Bucks");
        register_text(*static_text_entry::CurrencyPlural, "Spirit Light");
        register_text(*static_text_entry::CurrencyPlural, "Stamps");
        register_text(*static_text_entry::CurrencyPlural, "Stonks");
        register_text(*static_text_entry::CurrencyPlural, "Subs");
        register_text(*static_text_entry::CurrencyPlural, "Tickets");
        register_text(*static_text_entry::CurrencyPlural, "Tokens");
        register_text(*static_text_entry::CurrencyPlural, "Vespine Gas");
        register_text(*static_text_entry::CurrencyPlural, "Wheat");
        register_text(*static_text_entry::CurrencyPlural, "Widgets");
        register_text(*static_text_entry::CurrencyPlural, "Wood");
        register_text(*static_text_entry::CurrencyPlural, "XP");
        register_text(*static_text_entry::CurrencyPlural, "Yen");
        register_text(*static_text_entry::CurrencyPlural, "Zenny");
        register_text(*static_text_entry::CurrencyPlural, "Złoty");

        register_text(*static_text_entry::CurrencySingular, "Banana");
        register_text(*static_text_entry::CurrencySingular, "Bell");
        register_text(*static_text_entry::CurrencySingular, "Bit");
        register_text(*static_text_entry::CurrencySingular, "Bolt");
        register_text(*static_text_entry::CurrencySingular, "Boonbuck");
        register_text(*static_text_entry::CurrencySingular, "Boxing");
        register_text(*static_text_entry::CurrencySingular, "Brick");
        register_text(*static_text_entry::CurrencySingular, "Brownie Point");
        register_text(*static_text_entry::CurrencySingular, "Byte");
        register_text(*static_text_entry::CurrencySingular, "Cash");
        register_text(*static_text_entry::CurrencySingular, "Coin");
        register_text(*static_text_entry::CurrencySingular, "Comment");
        register_text(*static_text_entry::CurrencySingular, "Credit");
        register_text(*static_text_entry::CurrencySingular, "Crown");
        register_text(*static_text_entry::CurrencySingular, "Diamond");
        register_text(*static_text_entry::CurrencySingular, "Dollar");
        register_text(*static_text_entry::CurrencySingular, "Dollerydoo");
        register_text(*static_text_entry::CurrencySingular, "Doubloon");
        register_text(*static_text_entry::CurrencySingular, "Dram");
        register_text(*static_text_entry::CurrencySingular, "Echo");
        register_text(*static_text_entry::CurrencySingular, "Emerald");
        register_text(*static_text_entry::CurrencySingular, "Euro");
        register_text(*static_text_entry::CurrencySingular, "Exalted Orb");
        register_text(*static_text_entry::CurrencySingular, "EXP");
        register_text(*static_text_entry::CurrencySingular, "Experience");
        register_text(*static_text_entry::CurrencySingular, "Farthing");
        register_text(*static_text_entry::CurrencySingular, "Fish");
        register_text(*static_text_entry::CurrencySingular, "Fun");
        register_text(*static_text_entry::CurrencySingular, "Gallon");
        register_text(*static_text_entry::CurrencySingular, "Geo");
        register_text(*static_text_entry::CurrencySingular, "Gil");
        register_text(*static_text_entry::CurrencySingular, "Glod");
        register_text(*static_text_entry::CurrencySingular, "Gold");
        register_text(*static_text_entry::CurrencySingular, "GP");
        register_text(*static_text_entry::CurrencySingular, "Hryvnia");
        register_text(*static_text_entry::CurrencySingular, "Hug");
        register_text(*static_text_entry::CurrencySingular, "Kalganid");
        register_text(*static_text_entry::CurrencySingular, "Leaf");
        register_text(*static_text_entry::CurrencySingular, "Like");
        register_text(*static_text_entry::CurrencySingular, "Marble");
        register_text(*static_text_entry::CurrencySingular, "Mineral");
        register_text(*static_text_entry::CurrencySingular, "Money");
        register_text(*static_text_entry::CurrencySingular, "Munny");
        register_text(*static_text_entry::CurrencySingular, "Noble");
        register_text(*static_text_entry::CurrencySingular, "Note");
        register_text(*static_text_entry::CurrencySingular, "Nut");
        register_text(*static_text_entry::CurrencySingular, "Nuyen");
        register_text(*static_text_entry::CurrencySingular, "Ori Money");
        register_text(*static_text_entry::CurrencySingular, "Peso");
        register_text(*static_text_entry::CurrencySingular, "Piece of Eight");
        register_text(*static_text_entry::CurrencySingular, "Point");
        register_text(*static_text_entry::CurrencySingular, "Poké");
        register_text(*static_text_entry::CurrencySingular, "Pon");
        register_text(*static_text_entry::CurrencySingular, "Pound Sterling");
        register_text(*static_text_entry::CurrencySingular, "Quatloo");
        register_text(*static_text_entry::CurrencySingular, "Quill");
        register_text(*static_text_entry::CurrencySingular, "Ring");
        register_text(*static_text_entry::CurrencySingular, "Ruby");
        register_text(*static_text_entry::CurrencySingular, "Rune");
        register_text(*static_text_entry::CurrencySingular, "Rupee");
        register_text(*static_text_entry::CurrencySingular, "Sapphire");
        register_text(*static_text_entry::CurrencySingular, "Sheep");
        register_text(*static_text_entry::CurrencySingular, "Shilling");
        register_text(*static_text_entry::CurrencySingular, "Silver");
        register_text(*static_text_entry::CurrencySingular, "Sliver");
        register_text(*static_text_entry::CurrencySingular, "Sock");
        register_text(*static_text_entry::CurrencySingular, "Solari");
        register_text(*static_text_entry::CurrencySingular, "Soul");
        register_text(*static_text_entry::CurrencySingular, "Sovereign");
        register_text(*static_text_entry::CurrencySingular, "Sphere");
        register_text(*static_text_entry::CurrencySingular, "Spirit Buck");
        register_text(*static_text_entry::CurrencySingular, "Spirit Light");
        register_text(*static_text_entry::CurrencySingular, "Stamp");
        register_text(*static_text_entry::CurrencySingular, "Stonk");
        register_text(*static_text_entry::CurrencySingular, "Sub");
        register_text(*static_text_entry::CurrencySingular, "Ticket");
        register_text(*static_text_entry::CurrencySingular, "Token");
        register_text(*static_text_entry::CurrencySingular, "Vespine Gas");
        register_text(*static_text_entry::CurrencySingular, "Wheat");
        register_text(*static_text_entry::CurrencySingular, "Widget");
        register_text(*static_text_entry::CurrencySingular, "Wood");
        register_text(*static_text_entry::CurrencySingular, "XP");
        register_text(*static_text_entry::CurrencySingular, "Yen");
        register_text(*static_text_entry::CurrencySingular, "Zenny");
        register_text(*static_text_entry::CurrencySingular, "Złoty");

        register_text(*static_text_entry::TrialTextReach, " ");
        register_text(*static_text_entry::TrialTextDepths, " ");
        register_text(*static_text_entry::TrialTextMarsh, " ");
        register_text(*static_text_entry::TrialTextHollow, " ");
        register_text(*static_text_entry::TrialTextPools, " ");
        register_text(*static_text_entry::TrialTextWastes, " ");
        register_text(*static_text_entry::TrialTextWellspring, " ");
        register_text(*static_text_entry::TrialTextWoods, " ");
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
        notify_changed(reactivity::TextDatabaseDependency { id });
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
        notify_changed(reactivity::TextDatabaseDependency { id });
    }

    bool has_text(text_id id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        return get_text_count(id) > 0;
    }

    int get_text_count(text_id id) {

        notify_used(reactivity::TextDatabaseDependency { id });
        auto& entry = text_entries[id];
        return static_cast<int>(entry.text.size());
    }

    std::string_view get_text(text_id id, int i) {
        notify_used(reactivity::TextDatabaseDependency { id });
        auto& entry = text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        return entry.text.at(i);
    }

    std::wstring get_text_w(text_id id, int i) {
        notify_used(reactivity::TextDatabaseDependency { id });

        // Can't return a wstring_view here as we are converting the data so it would get destroyed as we returned.
        auto& entry = text_entries[id];
        if (entry.text.empty()) {
            return L"";
        }

        return convert_string_to_wstring(entry.text.at(i));
    }

    std::vector<std::string> const& get_all_text(text_id id) {
        notify_used(reactivity::TextDatabaseDependency { id });
        auto& entry = text_entries[id];
        return entry.text;
    }

    std::string get_concatenated_text(text_id id, std::string_view delimiter) {
        notify_used(reactivity::TextDatabaseDependency { id });
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
        notify_used(reactivity::TextDatabaseDependency { id });
        auto& entry = text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        int index = random(0, static_cast<int>(entry.text.size() - 1));
        return entry.text[index];
    }

    std::string_view get_random_text_with_hash(text_id id, std::size_t hash) {
        notify_used(reactivity::TextDatabaseDependency { id });
        auto& entry = text_entries[id];
        if (entry.text.empty()) {
            return "";
        }

        const auto index = hash % entry.text.size();
        return entry.text[index];
    }

    app::MessageProvider* get_provider(text_id id, int i) {
        notify_used(reactivity::TextDatabaseDependency{id});
        const auto& entry = text_entries[id];
        const auto text = entry.text.empty() ? "" : entry.text[i];
        return api::system::create_message_provider(text);
    }

    app::MessageProvider* get_random_provider(text_id id) {
        auto& entry = text_entries[id];
        int index = entry.text.empty() ? 0 : random(0, static_cast<int>(entry.text.size() - 1));
        return get_provider(id, index);
    }

    int allocate_dynamic() {
        return next_text_id++;
    }

    void clear_dynamic() {
        for (auto i = static_cast<text_id>(StaticTextEntry::STATIC_TEXT_ENTRY_END) + 1; i < next_text_id; ++i) {
            clear_text(i);
        }

        dynamic_to_index.clear();
        next_text_id = static_cast<int>(StaticTextEntry::STATIC_TEXT_ENTRY_END) + 1;
    }
} // namespace core::text
