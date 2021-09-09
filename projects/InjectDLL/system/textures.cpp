#include <system/textures.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>
#include <string>

namespace textures
{
    std::unordered_map<std::wstring, uint32_t> files;

    app::Texture2D* get_texture(std::wstring_view path)
    {
        try
        {
            auto separator = path.find(':', 0);
            if (separator == -1)
            {
                // Trace error
                return nullptr;
            }

            auto type = path.substr(0, separator);
            auto value = std::wstring(path.substr(separator + 1));
            if (type == L"spirit_shard")
            {
                auto actual_value = static_cast<app::SpiritShardType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                // TODO: add second selector.
                return item == nullptr ? nullptr : item->fields.InventoryIcon;
            }
            else if (type == L"ability")
            {
                auto actual_value = static_cast<app::AbilityType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::Texture2D>(settings->fields.CustomAbilityIcons, "GetValue", &actual_value);
                // TODO: add second selector.
                return item;
            }
            else if (type == L"spell")
            {
                auto actual_value = static_cast<app::EquipmentType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                // TODO: add second selector.
                return item == nullptr ? nullptr : item->fields.InventoryIcon;
            }
            else if (type == L"file")
            {
                auto it = files.find(value);
                if (it != files.end())
                    return reinterpret_cast<app::Texture2D*>(il2cpp::gchandle_target(it->second));
                else
                {
                    // TODO: Load file.
                    return nullptr;
                }
            }
            else
            {
                // Trace error
                return nullptr;
            }
        }
        catch (std::exception e)
        {
            modloader::warn("textures", format("Fatal error fetching texture (%s)", e.what()));
            return nullptr;
        }
    }
}
