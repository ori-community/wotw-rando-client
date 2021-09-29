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
#include <constants.h>

using namespace modloader;

namespace textures
{
    namespace
    {
        std::unordered_map<app::WorldMapIconType__Enum, uint32_t> base_materials;
        std::unordered_map<app::Renderer*, uint32_t> default_materials;
        std::unordered_map<std::wstring, uint32_t> files;

        NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Texture2D, void, .ctor, ctor,
            (app::Texture2D* this_ptr, int width, int height, app::TextureFormat__Enum format, bool mip_chain, bool linear),
            (System:Int32, System:Int32, UnityEngine:TextureFormat, System:Boolean, System:Boolean))
        IL2CPP_BINDING(UnityEngine, Texture2D, void, LoadRawTextureData, (app::Texture2D* this_ptr, void* data, int size));
        IL2CPP_BINDING(UnityEngine, Texture2D, void, Apply, (app::Texture2D* this_ptr, bool update_mipmaps, bool no_longer_readable));

        IL2CPP_BINDING(, AreaMapIconManager, app::GameObject*, GetIcon, (app::AreaMapIconManager* this_ptr, app::WorldMapIconType__Enum icon_type));
        IL2CPP_BINDING(UnityEngine, Renderer, void, SetMaterial, (app::Renderer* this_ptr, app::Material* material));
        IL2CPP_BINDING(UnityEngine, Renderer, app::Material*, GetMaterial, (app::Renderer* this_ptr));
        IL2CPP_BINDING(UnityEngine, Renderer, app::Material*, GetSharedMaterial, (app::Renderer* this_ptr));
        NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, .ctor, ctor_shader, (app::Shader* this_ptr, app::Material* other), (UnityEngine:Shader));
        NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, .ctor, ctor, (app::Material* this_ptr, app::Material* other), (UnityEngine:Material));
        IL2CPP_BINDING(UnityEngine, Material, void, CopyPropertiesFromMaterial, (app::Material* this_ptr, app::Material* other));
        IL2CPP_BINDING(UnityEngine, Material, app::Shader*, get_shader, (app::Material* this_ptr));
    }

    app::Material* copy_material(app::Material* source)
    {
        auto instanced_material = il2cpp::create_object<app::Material>("UnityEngine", "Material");
        Material::ctor(instanced_material, source);
        Material::CopyPropertiesFromMaterial(instanced_material, source);
        return instanced_material;
    }

    TextureData::~TextureData()
    {
        clear_overrides();
    }

    void TextureData::apply(app::Renderer* renderer)
    {
        auto default_material = default_materials.find(renderer);
        if (default_material == default_materials.end())
            default_materials[renderer] = il2cpp::gchandle_new(Renderer::GetSharedMaterial(renderer), false);

        auto material = materials[renderer];
        if (material == 0)
        {
            app::Material* to_copy = nullptr;
            if (base_material != 0)
            {
                to_copy = il2cpp::gchandle_target<app::Material>(base_material);
                if (!il2cpp::unity::is_valid(to_copy))
                    to_copy = nullptr;
            }

            if (to_copy == nullptr)
            {
                to_copy = il2cpp::gchandle_target<app::Material>(default_materials[renderer]);
                if (!il2cpp::unity::is_valid(to_copy))
                    to_copy = nullptr;
            }

            if (to_copy == nullptr)
            {
                il2cpp::gchandle_free(default_materials[renderer]);
                to_copy = Renderer::GetSharedMaterial(renderer);
                default_materials[renderer] = il2cpp::gchandle_new(to_copy, false);
                if (!il2cpp::unity::is_valid(to_copy))
                    to_copy = nullptr;
            }

            if (to_copy == nullptr)
            {
                warn("textures", "failed to find a valid material to copy.");
                return;
            }

            material = il2cpp::gchandle_new(copy_material(to_copy), false);
            materials[renderer] = material;
        }

        auto mat = il2cpp::gchandle_target<app::Material>(material);
        Renderer::SetMaterial(renderer, mat);
        if (texture != nullptr)
            shaders::UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, texture);

        if (uvs.has_value())
            shaders::UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &uvs.value());

        if (scroll_rot.has_value())
            shaders::UberShaderAPI::SetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &scroll_rot.value());

        if (color.has_value())
            shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &color.value());
    }

    void apply_default(app::Renderer* renderer)
    {
        auto default_material = default_materials.find(renderer);
        if (default_material == default_materials.end())
        {
            default_materials[renderer] = il2cpp::gchandle_new(Renderer::GetMaterial(renderer), false);
            default_material = default_materials.find(renderer);
        }
        
        Renderer::SetMaterial(renderer, il2cpp::gchandle_target<app::Material>(default_material->second));
    }

    void TextureData::set_texture(app::Texture* texture)
    {
        this->texture = texture;
    }

    void TextureData::set_uvs(app::Vector4 uvs)
    {
        this->uvs = uvs;
    }

    void TextureData::set_scroll_rot(app::Vector4 scroll_rot)
    {
        this->scroll_rot = scroll_rot;
    }

    void TextureData::set_color(app::Color color)
    {
        this->color = color;
    }

    void TextureData::clear_overrides()
    {
        texture = nullptr;
        uvs.reset();
        scroll_rot.reset();
        color.reset();
        for (auto material : materials)
            il2cpp::gchandle_free(material.second);

        materials.clear();
    }

    std::shared_ptr<TextureData> create_texture()
    {
        auto data = std::make_shared<TextureData>();
        data->path = L"custom";
        return std::make_shared<TextureData>();
    }

    std::shared_ptr<TextureData> get_texture(std::wstring_view path)
    {
        auto data = std::make_shared<TextureData>();
        data->path = std::wstring(path);
        try
        {
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
                if (item == nullptr)
                    return nullptr;

                data->texture = reinterpret_cast<app::Texture*>(item == nullptr ? nullptr : item->fields.InventoryIcon);
                return data;
            }
            else if (type == L"ability")
            {
                auto actual_value = static_cast<app::AbilityType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::Texture2D>(settings->fields.CustomAbilityIcons, "GetValue", &actual_value);
                if (item == nullptr)
                    return nullptr;

                data->texture = reinterpret_cast<app::Texture*>(item);
                return data;
            }
            else if (type == L"spell")
            {
                auto actual_value = static_cast<app::EquipmentType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                if (item == nullptr)
                    return nullptr;

                data->texture = reinterpret_cast<app::Texture*>(item->fields.InventoryIcon);
                return data;
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
                auto it = base_materials.find(actual_value);
                if (it != base_materials.end())
                {
                    data->base_material = it->second;
                    return data;
                }

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
                auto material = shaders::UberShaderAPI::GetEditableMaterial(renderer);
                data->base_material = il2cpp::gchandle_new(material, false);
                base_materials[actual_value] = data->base_material;
                return data;
            }
            else if (type == L"opher")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::WeaponmasterScreen__Class>("", "WeaponmasterScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.WeaponmasterItems;
                if (actual_value >= 0 && actual_value < items->max_length)
                {
                    data->texture = reinterpret_cast<app::Texture*>(items->vector[actual_value]->fields.Upgrade->fields.Icon);
                    return data;
                }
            }
            else if (type == L"lupo")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen")->static_fields->Instance;
                auto items = screen->fields.Purchases;
                if (actual_value >= 0 && actual_value < items->max_length)
                {
                    data->texture = reinterpret_cast<app::Texture*>(items->vector[actual_value]->fields.Icon);
                    return data;
                }
            }
            else if (type == L"grom")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::BuilderScreen__Class>("", "BuilderScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.BuilderItems;
                if (actual_value >= 0 && actual_value < items->max_length)
                {
                    data->texture = reinterpret_cast<app::Texture*>(items->vector[actual_value]->fields.Project->fields.Icon);
                    return data;
                }
            }
            else if (type == L"tuley")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::GardenerScreen__Class>("", "GardenerScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.GardenerItems;
                if (actual_value >= 0 && actual_value < items->max_length)
                {
                    data->texture = reinterpret_cast<app::Texture*>(items->vector[actual_value]->fields.Project->fields.Icon);
                    return data;
                }
            }
            else if (type == L"file")
            {
                auto it = files.find(value);
                if (it != files.end())
                {
                    data->texture = reinterpret_cast<app::Texture*>(il2cpp::gchandle_target(it->second));
                    return data;
                }

                auto path = base_path + convert_wstring_to_string(value);
                replace_all(path, "/", "\\");

                int x;
                int y;
                int n = 4;
                stbi_set_flip_vertically_on_load(true);
                unsigned char* png_data = stbi_load(path.c_str(), &x, &y, &n, STBI_rgb_alpha);
                if (png_data == nullptr)
                {
                    modloader::warn("textures", format("failed to load texture %s (%s).", path.c_str(), stbi_failure_reason()));
                    return data;
                }

                auto texture = il2cpp::create_object<app::Texture2D>("UnityEngine", "Texture2D");
                Texture2D::ctor(texture, x, y, app::TextureFormat__Enum_RGBA32, false, false);
                Texture2D::LoadRawTextureData(texture, png_data, x * y * n);
                Texture2D::Apply(texture, true, false);
                stbi_image_free(png_data);
                files[value] = il2cpp::gchandle_new(texture, false);
                data->texture = reinterpret_cast<app::Texture*>(texture);
                return data;
            }
            else
                modloader::warn("textures", "unknown texture protocol used when loading texture.");
        }
        catch (std::exception e)
        {
            modloader::warn("textures", format("Fatal error fetching texture (%s)", e.what()));
        }

        return nullptr;
    }

    void refresh()
    {
        for (auto material : base_materials)
            il2cpp::gchandle_free(material.second);

        base_materials.clear();
    }
}
