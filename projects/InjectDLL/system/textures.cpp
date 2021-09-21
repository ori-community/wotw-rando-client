#include <system/textures.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <utils\stb_image.h>

#include <fstream>
#include <string>
#include <unordered_map>

using namespace modloader;

namespace textures
{
    std::unordered_map<std::wstring, uint32_t> files;

    NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Texture2D, void, .ctor, ctor,
        (app::Texture2D* this_ptr, int width, int height, app::TextureFormat__Enum format, bool mip_chain, bool linear),
        (System:Int32, System:Int32, UnityEngine:TextureFormat, System:Boolean, System:Boolean))
    IL2CPP_BINDING(UnityEngine, Texture2D, void, LoadRawTextureData, (app::Texture2D* this_ptr, void* data, int size));
    IL2CPP_BINDING(UnityEngine, Texture2D, void, Apply, (app::Texture2D* this_ptr, bool update_mipmaps, bool no_longer_readable));
    IL2CPP_BINDING(UnityEngine, Texture2D, app::Byte__Array*, GetRawTextureData, (app::Texture2D* this_ptr));
    STATIC_IL2CPP_BINDING(UnityEngine, ImageConversion, bool, LoadImage, (app::Texture2D* texture, app::Byte__Array* data, bool non_readable));
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

                auto path = base_path + convert_wstring_to_string(value);
                replace_all(path, "/", "\\");

                int x;
                int y;
                int n = 4;
                stbi_set_flip_vertically_on_load(true);
                unsigned char* data = stbi_load(path.c_str(), &x, &y, &n, STBI_rgb_alpha);
                if (data == nullptr)
                {
                    modloader::warn("textures", format("failed to load texture %s (%s).", path.c_str(), stbi_failure_reason()));
                    return nullptr;
                }

                auto texture = il2cpp::create_object<app::Texture2D>("UnityEngine", "Texture2D");
                Texture2D::ctor(texture, x, y, app::TextureFormat__Enum_RGBA32, false, false);
                Texture2D::LoadRawTextureData(texture, data, x * y * n);
                Texture2D::Apply(texture, true, false);
                stbi_image_free(data);
                return texture;
            }
            else
            {
                modloader::warn("textures", "unknown texture protocol used when loading texture.");
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
