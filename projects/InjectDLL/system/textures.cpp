#include <system/textures.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <dev/object_visualizer.h>
#include <utils/shaders.h>
#include <utils/stb_image.h>

#include <fstream>
#include <string>
#include <unordered_map>

using namespace modloader;
/*

public class Material : Object // TypeDefIndex: 4551
{
    // Properties
    public Shader shader { get; set; }
    public Color color { get; set; }
    public Texture mainTexture { get; set; }
    public Vector2 mainTextureOffset { get; set; }
    public Vector2 mainTextureScale { get; set; }
    public int renderQueue { get; set; }
    public int passCount { get; }
    public string[] shaderKeywords { set; }



*/
namespace textures
{
    std::unordered_map<std::wstring, uint32_t> files;

    namespace
    {
        NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Texture2D, void, .ctor, ctor,
            (app::Texture2D* this_ptr, int width, int height, app::TextureFormat__Enum format, bool mip_chain, bool linear),
            (System:Int32, System:Int32, UnityEngine:TextureFormat, System:Boolean, System:Boolean))
        IL2CPP_BINDING(UnityEngine, Texture2D, void, LoadRawTextureData, (app::Texture2D* this_ptr, void* data, int size));
        IL2CPP_BINDING(UnityEngine, Texture2D, void, Apply, (app::Texture2D* this_ptr, bool update_mipmaps, bool no_longer_readable));

        IL2CPP_BINDING(, AreaMapIconManager, app::GameObject*, GetIcon, (app::AreaMapIconManager* this_ptr, app::WorldMapIconType__Enum icon_type));
    }

    void set_uvs(app::Renderer* renderer, app::Vector4& uvs)
    {
        shaders::UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &uvs);
    }

    void set_default_uvs(app::Renderer* renderer)
    {
        app::Vector4 uvs{ 0.0f, 0.0f, 1.0f, 1.0f };
        shaders::UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &uvs);
    }

    app::Texture2D* get_texture(std::wstring_view path, app::Vector4* uvs)
    {
        try
        {
            if (uvs != nullptr)
                *uvs = { 0.0f, 0.0f, 1.0f, 1.0f };

            auto separator = path.find(':', 0);
            if (separator == -1)
            {
                // Trace error
                return nullptr;
            }

            auto type = std::wstring(path.substr(0, separator));
            auto value = std::wstring(path.substr(separator + 1));
            if (type == L"shard")
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
            else if (type == L"map")
            {
                auto separator = value.find(':', 0);
                if (separator == -1)
                {
                    type = value;
                    value = L"active";
                }
                else
                {
                    type = value.substr(0, separator);
                    value = std::wstring(value.substr(separator + 1));
                }

                auto actual_value = static_cast<app::WorldMapIconType__Enum>(std::stoi(type));
                auto icon_manager = il2cpp::get_class<app::AreaMapUI__Class>("", "AreaMapUI")->static_fields->Instance->fields._IconManager_k__BackingField;
                auto go = AreaMapIconManager::GetIcon(icon_manager, actual_value);
                if (go == nullptr)
                    return nullptr;

                auto icon = il2cpp::unity::get_components<app::AreaMapIcon>(go, "", "AreaMapIcon")[0];
                if (value == L"active")
                    go = icon->fields.MapIconActive;
                else if (value == L"special")
                    go = icon->fields.MapIconSpecial;
                else if (value == L"inactive")
                    go = icon->fields.MapIconInactive;
                else
                    go = nullptr;

                if (go == nullptr)
                    return nullptr;

                auto renderer = il2cpp::unity::get_components<app::Renderer>(go, "UnityEngine", "Renderer")[0];
                if (uvs != nullptr)
                    *uvs = shaders::UberShaderAPI::GetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture);

                return reinterpret_cast<app::Texture2D*>(shaders::UberShaderAPI::GetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture));
            }
            else if (type == L"opher")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::WeaponmasterScreen__Class>("", "WeaponmasterScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.WeaponmasterItems;
                if (actual_value < 0 && actual_value >= items->max_length)
                    return nullptr;

                return items->vector[actual_value]->fields.Upgrade->fields.Icon;
            }
            else if (type == L"lupo")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen")->static_fields->Instance;
                auto items = screen->fields.Purchases;
                if (actual_value < 0 && actual_value >= items->max_length)
                    return nullptr;

                return items->vector[actual_value]->fields.Icon;
            }
            else if ("grom")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::BuilderScreen__Class>("", "BuilderScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.BuilderItems;
                if (actual_value < 0 && actual_value >= items->max_length)
                    return nullptr;

                return items->vector[actual_value]->fields.Project->fields.Icon;
            }
            else if ("tuley")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::GardenerScreen__Class>("", "GardenerScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.GardenerItems;
                if (actual_value < 0 && actual_value >= items->max_length)
                    return nullptr;

                return items->vector[actual_value]->fields.Project->fields.Icon;
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
                files[value] = il2cpp::gchandle_new(texture, false);

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
