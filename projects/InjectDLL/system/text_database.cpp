#include <text_database.h>
#include <utils/messaging.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <unordered_map>

namespace text_database
{
    struct TextEntry
    {
        std::vector<std::string> text;
        uint32_t provider = -1;
    };

    // Start dynamic entries after all static values.
    int next_text_id = static_cast<int>(StaticTextEntries::TOTAL) + 1;
    std::unordered_map<int, TextEntry> text_entries;
    std::unordered_map<int, int> dynamic_to_index;

    void initialize()
    {
        register_text(*static_text_entries::Empty, " ");
        register_text(*static_text_entries::EmptyName, "Empty");
        register_text(*static_text_entries::Locked, "Locked");
        register_text(*static_text_entries::Undiscovered, "Undiscovered");
        register_text(*static_text_entries::UndiscoveredDescription, "What could it be?");
        register_text(*static_text_entries::LupoWillowSalesPitch,
            "Given the circumstances I would usually give you this for free,\n"
            "but a speedrunner has got to eat...  [AreaMapCost] #Spirit Light#[SpiritLight]"
        ); 
    }

    CALL_ON_INIT(initialize);

    app::MessageProvider* create_provider(TextEntry& entry)
    {
        auto provider = utils::create_message_provider(entry.text);
        entry.provider = il2cpp::gchandle_new(provider, false);
        for (auto const& text : entry.text)
            utils::add_to_message_provider(reinterpret_cast<app::TranslatedMessageProvider*>(provider), text);

        return provider;
    }

    app::MessageProvider* get_provider(TextEntry& entry, bool create = false)
    {
        if (entry.provider == -1)
        {
            if (create)
                return create_provider(entry);

            return nullptr;
        }

        auto provider = il2cpp::gchandle_target<app::MessageProvider>(entry.provider);
        if (!il2cpp::unity::is_valid(provider))
        {
            il2cpp::gchandle_free(entry.provider);
            if (create)
                return create_provider(entry);

            entry.provider = -1;
            return nullptr;
        }

        return provider;
    }

    void register_text(int id, std::string_view text)
    {
        auto& entry = text_entries[id];
        entry.text.push_back(std::string(text));
        auto provider = get_provider(entry);
        if (provider != nullptr)
            utils::add_to_message_provider(reinterpret_cast<app::TranslatedMessageProvider*>(provider), text);
    }

    void register_text(int id, std::wstring_view text)
    {
        register_text(id, convert_wstring_to_string(text));
    }

    void clear_text(int id)
    {
        auto& entry = text_entries[id];
        entry.text.clear();
        auto provider = get_provider(entry);
        if (provider != nullptr)
            il2cpp::invoke(reinterpret_cast<app::TranslatedMessageProvider*>(provider)->fields.Messages, "Clear");
    }

    bool has_text(int id)
    {
        return get_text_count(id) > 0;
    }

    int get_text_count(int id)
    {
        auto& entry = text_entries[id];
        return entry.text.size();
    }

    std::string_view get_text(int id, int i)
    {
        auto& entry = text_entries[id];
        return entry.text.at(i);
    }

    std::wstring get_text_w(int id, int i)
    {
        // Can't return a wstring_view here as we are converting the data so it would get destroyed as we returned.
        auto& entry = text_entries[id];
        return convert_string_to_wstring(entry.text.at(i));
    }

    std::vector<std::string> const& get_all_text(int id)
    {
        auto& entry = text_entries[id];
        return entry.text;
    }

    app::MessageProvider* get_provider(int id)
    {
        auto& entry = text_entries[id];
        return get_provider(entry, true);
    }

    int get_index_from_dynamic(int id)
    {
        auto it = text_database::dynamic_to_index.find(id);
        if (it == text_database::dynamic_to_index.end())
        {
            text_database::dynamic_to_index[id] = text_database::next_text_id++;
            it = text_database::dynamic_to_index.find(id);
        }

        return it->second;
    }
}

INJECT_C_DLLEXPORT void text_database_register_text(int id, bool dynamic, const wchar_t* text)
{
    if (!dynamic && id >= *static_text_entries::TOTAL + 1)
        modloader::warn("text_database", "calling register_text with dynamic=false and a dynamic id.");

    id = dynamic ? text_database::get_index_from_dynamic(id) : id;
    text_database::register_text(id, text);
}

INJECT_C_DLLEXPORT bool text_database_has_text(int id, bool dynamic)
{
    if (!dynamic && id >= *static_text_entries::TOTAL + 1)
        modloader::warn("text_database", "calling has_text with dynamic=false and a dynamic id.");

    id = dynamic ? text_database::get_index_from_dynamic(id) : id;
    return text_database::has_text(id);
}

INJECT_C_DLLEXPORT const char* text_database_get_text(int id, bool dynamic)
{
    if (!dynamic && id >= *static_text_entries::TOTAL + 1)
        modloader::warn("text_database", "calling get_text with dynamic=false and a dynamic id.");

    id = dynamic ? text_database::get_index_from_dynamic(id) : id;
    auto text = text_database::get_text(id);
    return text.data();
}

INJECT_C_DLLEXPORT void text_database_clear_text(int id, bool dynamic)
{
    if (!dynamic && id >= *static_text_entries::TOTAL + 1)
        modloader::warn("text_database", "calling clear_text with dynamic=false and a dynamic id.");

    id = dynamic ? text_database::get_index_from_dynamic(id) : id;
    text_database::clear_text(id);
}

INJECT_C_DLLEXPORT void text_database_reset_static()
{
    for (auto i = 0; i < *text_database::StaticTextEntries::TOTAL; ++i)
        text_database::clear_text(i);

    text_database::initialize();
}

INJECT_C_DLLEXPORT void text_database_clear_dynamic()
{
    for (auto i = static_cast<int>(text_database::StaticTextEntries::TOTAL) + 1; i < text_database::next_text_id; ++i)
        text_database::clear_text(i);

    text_database::dynamic_to_index.clear();
    text_database::next_text_id = static_cast<int>(text_database::StaticTextEntries::TOTAL) + 1;
}
