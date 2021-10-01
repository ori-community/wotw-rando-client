#include <constants.h>
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
#include <vector>
#include <unordered_map>

using namespace modloader;

namespace textures
{
    namespace
    {
        std::unordered_map<std::wstring, uint32_t> files;
        std::unordered_map<app::Renderer*, MaterialParams> default_params;

        NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Texture2D, void, .ctor, ctor,
            (app::Texture2D* this_ptr, int width, int height, app::TextureFormat__Enum format, bool mip_chain, bool linear),
            (System:Int32, System:Int32, UnityEngine:TextureFormat, System:Boolean, System:Boolean))
        IL2CPP_BINDING(UnityEngine, Texture2D, void, LoadRawTextureData, (app::Texture2D* this_ptr, void* data, int size));
        IL2CPP_BINDING(UnityEngine, Texture2D, void, Apply, (app::Texture2D* this_ptr, bool update_mipmaps, bool no_longer_readable));

        IL2CPP_BINDING(, AreaMapIconManager, app::GameObject*, GetIcon, (app::AreaMapIconManager* this_ptr, app::WorldMapIconType__Enum icon_type));
        IL2CPP_BINDING(UnityEngine, Renderer, void, SetMaterial, (app::Renderer* this_ptr, app::Material* material));
        IL2CPP_BINDING(UnityEngine, Renderer, app::Material*, GetMaterial, (app::Renderer* this_ptr));
        IL2CPP_BINDING(UnityEngine, Renderer, app::Material*, GetSharedMaterial, (app::Renderer* this_ptr));
        NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, .ctor, ctor_shader, (app::Material* this_ptr, app::Shader* shader), (UnityEngine:Shader));
        NAMED_IL2CPP_BINDING_OVERLOAD(UnityEngine, Material, void, .ctor, ctor, (app::Material* this_ptr, app::Material* other), (UnityEngine:Material));
        IL2CPP_BINDING(UnityEngine, Material, void, CopyPropertiesFromMaterial, (app::Material* this_ptr, app::Material* other));
        IL2CPP_BINDING(UnityEngine, Material, app::Shader*, get_shader, (app::Material* this_ptr));
        STATIC_IL2CPP_BINDING(UnityEngine, Object, void, DontDestroyOnLoad, (void* obj));
    }

    app::Material* copy_material(app::Material* source)
    {
        auto instanced_material = il2cpp::create_object<app::Material>("UnityEngine", "Material");
        auto shader = Material::get_shader(source);
        Material::ctor_shader(instanced_material, shader);
        Material::CopyPropertiesFromMaterial(instanced_material, source);
        return instanced_material;
    }

    TextureData::~TextureData()
    {
        clear_overrides();
    }

    void add_default_param(app::Renderer* renderer)
    {
        MaterialParams& mparams = default_params[renderer];
        mparams.texture = shaders::UberShaderAPI::GetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture);
        mparams.uvs = shaders::UberShaderAPI::GetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture);
        mparams.scroll_rot = shaders::UberShaderAPI::GetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum_MainTexture);
        mparams.color = shaders::UberShaderAPI::GetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor);
    }

    void TextureData::apply(app::Renderer* renderer)
    {
        if (default_params.find(renderer) == default_params.end())
            add_default_param(renderer);

        if (!initialized)
        {
            load_texture();
            initialized = true;
        }

        if (local.texture != nullptr)
            shaders::UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, local.texture);

        if (local.uvs.has_value())
            shaders::UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &local.uvs.value());

        if (local.scroll_rot.has_value())
            shaders::UberShaderAPI::SetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &local.scroll_rot.value());

        if (local.color.has_value())
            shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &local.color.value());
    }

    void apply_default(app::Renderer* renderer)
    {
        if (default_params.find(renderer) == default_params.end())
            add_default_param(renderer);

        auto& param = default_params[renderer];
        shaders::UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, param.texture);
        shaders::UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &param.uvs.value());
        shaders::UberShaderAPI::SetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &param.scroll_rot.value());
        shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &param.color.value());
    }

    void TextureData::set_texture(app::Texture* texture)
    {
        local.texture = texture;
    }

    void TextureData::set_uvs(app::Vector4 uvs)
    {
        local.uvs = uvs;
    }

    void TextureData::set_scroll_rot(app::Vector4 scroll_rot)
    {
        local.scroll_rot = scroll_rot;
    }

    void TextureData::set_color(app::Color color)
    {
        local.color = color;
    }

    void TextureData::clear_overrides()
    {
        local.texture = nullptr;
        local.uvs.reset();
        local.scroll_rot.reset();
        local.color.reset();
    }

    std::shared_ptr<TextureData> create_texture()
    {
        auto data = std::make_shared<TextureData>();
        data->path = L"custom";
        data->initialized = true;
        return data;
    }

    void TextureData::load_texture()
    {
        try
        {
            auto separator = path.find(':', 0);
            auto type = std::wstring(path.substr(0, separator));
            auto value = std::wstring(path.substr(separator + 1));
            if (type == L"shard")
            {
                auto actual_value = static_cast<app::SpiritShardType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                if (item == nullptr)
                    return;

                local.texture = reinterpret_cast<app::Texture*>(item == nullptr ? nullptr : item->fields.InventoryIcon);
            }
            else if (type == L"ability")
            {
                auto actual_value = static_cast<app::AbilityType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::Texture2D>(settings->fields.CustomAbilityIcons, "GetValue", &actual_value);
                if (item == nullptr)
                    return;

                local.texture = reinterpret_cast<app::Texture*>(item);
            }
            else if (type == L"spell")
            {
                auto actual_value = static_cast<app::EquipmentType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                if (item == nullptr)
                    return;

                local.texture = reinterpret_cast<app::Texture*>(item->fields.InventoryIcon);
            }
            else if (type == L"opher")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::WeaponmasterScreen__Class>("", "WeaponmasterScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.WeaponmasterItems;
                if (actual_value >= 0 && actual_value < items->max_length)
                    local.texture = reinterpret_cast<app::Texture*>(items->vector[actual_value]->fields.Upgrade->fields.Icon);
            }
            else if (type == L"lupo")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen")->static_fields->Instance;
                auto items = screen->fields.Purchases;
                if (actual_value >= 0 && actual_value < items->max_length)
                    local.texture = reinterpret_cast<app::Texture*>(items->vector[actual_value]->fields.Icon);
            }
            else if (type == L"grom")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::BuilderScreen__Class>("", "BuilderScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.BuilderItems;
                if (actual_value >= 0 && actual_value < items->max_length)
                    local.texture = reinterpret_cast<app::Texture*>(items->vector[actual_value]->fields.Project->fields.Icon);
            }
            else if (type == L"tuley")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::GardenerScreen__Class>("", "GardenerScreen")->static_fields->_Instance_k__BackingField;
                auto items = screen->fields.GardenerItems;
                if (actual_value >= 0 && actual_value < items->max_length)
                    local.texture = reinterpret_cast<app::Texture*>(items->vector[actual_value]->fields.Project->fields.Icon);
            }
            else if (type == L"file")
            {
                auto it = files.find(value);
                if (it != files.end())
                {
                    local.texture = reinterpret_cast<app::Texture*>(il2cpp::gchandle_target(it->second));
                    return;
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
                    auto icon = 0;
                    auto shard_icons = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance->fields.Icons;
                    auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &icon);
                    local.texture = reinterpret_cast<app::Texture*>(icons->fields.InventoryIcon);
                    modloader::warn("textures", format("failed to load texture %s (%s).", path.c_str(), stbi_failure_reason()));
                    return;
                }

                auto texture = il2cpp::create_object<app::Texture2D>("UnityEngine", "Texture2D");
                Texture2D::ctor(texture, x, y, app::TextureFormat__Enum_RGBA32, false, false);
                Texture2D::LoadRawTextureData(texture, png_data, x * y * n);
                Texture2D::Apply(texture, true, false);
                stbi_image_free(png_data);
                Object::DontDestroyOnLoad(texture);
                files[value] = il2cpp::gchandle_new(texture, false);
                local.texture = reinterpret_cast<app::Texture*>(texture);
            }
            else
                modloader::warn("textures", "unknown texture protocol used when loading texture.");
        }
        catch (std::exception e)
        {
            modloader::warn("textures", format("Fatal error fetching texture (%s)", e.what()));
        }
    }

    bool validate_path(std::wstring_view path)
    {
        auto separator = path.find(':', 0);
        if (separator == -1)
            return false;

        auto type = std::wstring(path.substr(0, separator));
        auto value = std::wstring(path.substr(separator + 1));
        if (type == L"shard")
        {
            auto actual_value = static_cast<app::SpiritShardType__Enum>(std::stoi(value));
            auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;
            auto item = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
            return item != nullptr;
        }
        else if (type == L"ability")
        {
            auto actual_value = static_cast<app::AbilityType__Enum>(std::stoi(value));
            auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
            auto item = il2cpp::invoke<app::Texture2D>(settings->fields.CustomAbilityIcons, "GetValue", &actual_value);
            return item != nullptr;
        }
        else if (type == L"spell")
        {
            auto actual_value = static_cast<app::EquipmentType__Enum>(std::stoi(value));
            auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
            auto item = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
            return item != nullptr;
        }
        else if (type == L"opher")
        {
            auto actual_value = std::stoi(value);
            auto screen = il2cpp::get_class<app::WeaponmasterScreen__Class>("", "WeaponmasterScreen")->static_fields->_Instance_k__BackingField;
            auto items = screen->fields.WeaponmasterItems;
            return actual_value >= 0 && actual_value < items->max_length;
        }
        else if (type == L"lupo")
        {
            auto actual_value = std::stoi(value);
            auto screen = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen")->static_fields->Instance;
            auto items = screen->fields.Purchases;
            return actual_value >= 0 && actual_value < items->max_length;
        }
        else if (type == L"grom")
        {
            auto actual_value = std::stoi(value);
            auto screen = il2cpp::get_class<app::BuilderScreen__Class>("", "BuilderScreen")->static_fields->_Instance_k__BackingField;
            auto items = screen->fields.BuilderItems;
            return actual_value >= 0 && actual_value < items->max_length;
        }
        else if (type == L"tuley")
        {
            auto actual_value = std::stoi(value);
            auto screen = il2cpp::get_class<app::GardenerScreen__Class>("", "GardenerScreen")->static_fields->_Instance_k__BackingField;
            auto items = screen->fields.GardenerItems;
            return actual_value >= 0 && actual_value < items->max_length;
        }
        else if (type == L"file")
            return true;
    }

    std::shared_ptr<TextureData> get_texture(std::wstring_view path)
    {
        if (!validate_path(path))
            return nullptr;

        auto data = std::make_shared<TextureData>();
        data->path = std::wstring(path);
        data->initialized = false;
        return data;
    }
}
