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
        std::unordered_map<std::wstring, std::vector<std::weak_ptr<TextureData>>> file_instances;
        std::unordered_map<app::Renderer*, std::pair<uint32_t, MaterialParams>> default_params;

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
        MaterialParams mparams;
        auto texture = il2cpp::gchandle_new_weak(shaders::UberShaderAPI::GetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture), true);
        mparams.uvs = shaders::UberShaderAPI::GetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture);
        mparams.scroll_rot = shaders::UberShaderAPI::GetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum_MainTexture);
        mparams.color = shaders::UberShaderAPI::GetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor);
        default_params[renderer] = std::make_pair(texture, mparams);
    }

    void TextureData::apply(app::Material* mat)
    {
        if (!initialized)
        {
            load_texture();
            initialized = true;
        }

        if (texture.has_value())
        {
            auto texture_ptr = get();
            if (texture_ptr != nullptr)
                il2cpp::invoke(mat, "set_mainTexture", texture_ptr);
        }
    }

    void TextureData::apply(app::Renderer* renderer, MaterialParams* extra)
    {
        apply_texture(renderer);
        apply_params(renderer, extra);
    }

    void TextureData::apply_texture(app::Renderer* renderer)
    {
        if (default_params.find(renderer) == default_params.end())
            add_default_param(renderer);

        if (!initialized)
        {
            load_texture();
            initialized = true;
        }

        if (texture.has_value())
        {
            auto texture_ptr = get();
            if (texture_ptr != nullptr)
                shaders::UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, texture_ptr);
        }
    }

    void TextureData::apply_params(app::Renderer* renderer, MaterialParams* extra)
    {
        if (default_params.find(renderer) == default_params.end())
            add_default_param(renderer);

        auto param = extra != nullptr ? extra : &local;
        if (param->uvs.has_value())
            shaders::UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &param->uvs.value());

        if (param->scroll_rot.has_value())
            shaders::UberShaderAPI::SetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &param->scroll_rot.value());

        if (param->color.has_value())
            shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &param->color.value());
    }

    app::Texture2D* TextureData::get()
    {
        if (!texture.has_value())
            return nullptr;

        auto texture_ptr = il2cpp::gchandle_target<app::Texture2D>(texture.value());
        if (!il2cpp::unity::is_valid(texture_ptr) && path._Starts_with(L"file:"))
        {
            info("textures", "had to reload file texture.");
            reload_file_texture();
            texture_ptr = il2cpp::gchandle_target<app::Texture2D>(texture.value());
        }

        if (!il2cpp::unity::is_valid(texture_ptr))
            return nullptr;

        return texture_ptr;
    }

    void TextureData::reload_file_texture()
    {
        il2cpp::gchandle_free(texture.value());
        texture.reset();

        auto it = files.find(path);
        if (it != files.end())
            files.erase(it);

        load_texture();
        auto& collection = file_instances[path];
        for (auto data : collection)
            if (!data.expired())
                data.lock()->texture = texture;
    }

    void apply_default(app::Renderer* renderer)
    {
        if (default_params.find(renderer) == default_params.end())
            add_default_param(renderer);

        auto& pair = default_params[renderer];
        auto& param = pair.second;
        shaders::UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, il2cpp::gchandle_target<app::Texture>(pair.first));
        shaders::UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &param.uvs.value());
        shaders::UberShaderAPI::SetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, &param.scroll_rot.value());
        shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &param.color.value());
    }

    void TextureData::set_texture(app::Texture* texture_ptr)
    {
        texture = il2cpp::gchandle_new_weak(texture_ptr, true);
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
        texture.reset();
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
            texture = 0;
            auto separator = path.find(':', 0);
            auto type = std::wstring(path.substr(0, separator));
            auto value = std::wstring(path.substr(separator + 1));
            if (type == L"shard")
            {
                auto actual_value = static_cast<app::SpiritShardType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;
                if (settings != nullptr)
                {
                    auto item = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                    if (item != nullptr)
                        texture = il2cpp::gchandle_new_weak(item->fields.InventoryIcon, true);
                }
            }
            else if (type == L"ability")
            {
                auto actual_value = static_cast<app::AbilityType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
                if (settings != nullptr)
                {
                    auto item = il2cpp::invoke<app::Texture2D>(settings->fields.CustomAbilityIcons, "GetValue", &actual_value);
                    if (item != nullptr)
                        texture = il2cpp::gchandle_new_weak(item, true);
                }
            }
            else if (type == L"spell")
            {
                auto actual_value = static_cast<app::EquipmentType__Enum>(std::stoi(value));
                auto settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings")->static_fields->Instance;
                auto item = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                if (item != nullptr)
                    texture = il2cpp::gchandle_new_weak(item->fields.InventoryIcon, true);
            }
            else if (type == L"opher")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::WeaponmasterScreen__Class>("", "WeaponmasterScreen")->static_fields->_Instance_k__BackingField;
                if (screen != nullptr)
                {
                    auto items = screen->fields.WeaponmasterItems;
                    if (actual_value >= 0 && actual_value < items->max_length)
                        texture = il2cpp::gchandle_new_weak(items->vector[actual_value]->fields.Upgrade->fields.Icon, true);
                }
            }
            else if (type == L"lupo")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen")->static_fields->Instance;
                if (screen != nullptr)
                {
                    auto items = screen->fields.Purchases;
                    if (actual_value >= 0 && actual_value < items->max_length)
                        texture = il2cpp::gchandle_new_weak(items->vector[actual_value]->fields.Icon, true);
                }
            }
            else if (type == L"grom")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::BuilderScreen__Class>("", "BuilderScreen")->static_fields->_Instance_k__BackingField;
                if (screen != nullptr)
                {
                    auto items = screen->fields.BuilderItems;
                    if (actual_value >= 0 && actual_value < items->max_length)
                        texture = il2cpp::gchandle_new_weak(items->vector[actual_value]->fields.Project->fields.Icon, true);
                }
            }
            else if (type == L"tuley")
            {
                auto actual_value = std::stoi(value);
                auto screen = il2cpp::get_class<app::GardenerScreen__Class>("", "GardenerScreen")->static_fields->_Instance_k__BackingField;
                if (screen != nullptr)
                {
                    auto items = screen->fields.GardenerItems;
                    if (actual_value >= 0 && actual_value < items->max_length)
                        texture = il2cpp::gchandle_new(items->vector[actual_value]->fields.Project->fields.Icon, true);
                }
            }
            else if (type == L"file")
            {
                auto it = files.find(path);
                if (it != files.end())
                {
                    texture = it->second;
                    return;
                }

                auto texture_path = base_path + convert_wstring_to_string(value);
                replace_all(texture_path, "/", "\\");

                int x;
                int y;
                int n = 4;
                stbi_set_flip_vertically_on_load(true);
                unsigned char* png_data = stbi_load(texture_path.c_str(), &x, &y, &n, STBI_rgb_alpha);
                if (png_data == nullptr)
                {
                    auto icon = 0;
                    auto shard_icons = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance->fields.Icons;
                    auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &icon);
                    texture = il2cpp::gchandle_new_weak(icons->fields.InventoryIcon, true);
                    modloader::warn("textures", format("failed to load texture %s (%s).", texture_path.c_str(), stbi_failure_reason()));
                    return;
                }

                auto texture_ptr = il2cpp::create_object<app::Texture2D>("UnityEngine", "Texture2D");
                Texture2D::ctor(texture_ptr, x, y, app::TextureFormat__Enum_RGBA32, false, false);
                Texture2D::LoadRawTextureData(texture_ptr, png_data, x * y * n);
                Texture2D::Apply(texture_ptr, true, false);
                stbi_image_free(png_data);
                Object::DontDestroyOnLoad(texture_ptr);
                texture = il2cpp::gchandle_new(texture_ptr, false);
                files[path] = texture.value();
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

        return false;
    }

    std::shared_ptr<TextureData> get_texture(std::wstring_view path)
    {
        auto data = std::make_shared<TextureData>();
        data->path = std::wstring(path);
        data->initialized = true;
        data->load_texture();
        if (path._Starts_with(L"file:"))
            file_instances[data->path].push_back(data);

        if (data->texture == 0)
            return nullptr;

        return data;
    }

    INJECT_C_DLLEXPORT void reload_all_file_textures()
    {
        for (auto collection : file_instances)
        {
            for (auto it = collection.second.begin(); it != collection.second.end(); ++it)
            {
                if ((*it).expired())
                    continue;

                auto data = it->lock();
                data->reload_file_texture();
                break;
            }
        }
    }
}
