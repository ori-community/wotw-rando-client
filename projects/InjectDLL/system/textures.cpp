#include <system/textures.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

namespace textures
{
    std::unordered_map<std::string, uint32_t> files;

    app::Texture2D* get_texture(std::string_view path)
    {
        auto separator = path.find(':', 0);
        if (separator == -1)
        {
            // Trace error
            return nullptr;
        }

        auto type = path.substr(0, separator);
        auto value = std::string(path.substr(separator + 1));
        if (type == "spirit_shard")
        {
            auto actual_value = static_cast<app::SpiritShardType__Enum>(std::atoi(value.c_str()));
            auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;
            auto item = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", actual_value);
            // TODO: add second selector.
            return item == nullptr ? nullptr : item->fields.InventoryIcon;
        }
        else if (type == "ability")
        {
            auto actual_value = static_cast<app::AbilityType__Enum>(std::atoi(value.c_str()));
            auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
            auto item = il2cpp::invoke<app::Texture2D>(settings->fields.CustomAbilityIcons, "GetValue", actual_value);
            // TODO: add second selector.
            return item;
        }
        else if (type == "spell")
        {
            auto actual_value = static_cast<app::EquipmentType__Enum>(std::atoi(value.c_str()));
            auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
            auto item = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", actual_value);
            // TODO: add second selector.
            return item == nullptr ? nullptr : item->fields.InventoryIcon;
        }
        else if (type == "file")
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
}
