#include <Core/api/graphics/textures.h>

#include <Common/ext.h>

#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/Material.h>
#include <Modloader/app/methods/UnityEngine/Texture2D.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons__Boxed.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Boxed.h>
#include <Modloader/app/types/BuilderScreen.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/GardenerScreen.h>
#include <Modloader/app/types/MapmakerScreen.h>
#include <Modloader/app/types/SpellSettings.h>
#include <Modloader/app/types/SpiritShardSettings.h>
#include <Modloader/app/types/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/types/Texture.h>
#include <Modloader/app/types/Texture2D.h>
#include <Modloader/app/types/WeaponmasterScreen.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Core/api/game/game.h>
#include <Core/utils/stb_image.h>

#include <filesystem>
#include <string>
#include <unordered_map>
#include <vector>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::api::graphics::textures {
    namespace {
        std::unordered_map<std::string, gchandle> files;
        std::unordered_map<std::string, std::vector<std::weak_ptr<TextureData>>> file_instances;
        std::unordered_map<app::Renderer*, std::pair<gchandle, MaterialParams>> default_params;
        // TODO: May need one for Twillen as his sorting got changed, and may be needed for Tuley as well.
        std::unordered_map<int, int> grom_redirect{
            {0, 2}, // project_teleporter -> project_teleporter
            {1, 1}, // project_house1 -> project_house1
            {2, 3}, // project_houses2 -> project_thorns
            {3, 5}, // project_houses3 -> project_houses2
            {4, 4}, // project_cave -> project_cave
            {5, 2}, // project_thorns -> project_houses3
            {6, 6}, // project_beautify -> project_beautify
        };
    } // namespace

    TextureData::~TextureData() {
        clear_overrides();
    }

    void add_default_param(app::Renderer* renderer) {
        MaterialParams mparams;
        auto texture = il2cpp::gchandle_new_weak(UberShaderAPI::GetTexture(renderer, app::UberShaderProperty_Texture__Enum::MainTexture), true);
        mparams.uvs = UberShaderAPI::GetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum::MainTexture);
        mparams.scroll_rot = UberShaderAPI::GetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum::MainTexture);
        mparams.color = UberShaderAPI::GetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor);
        default_params[renderer] = std::make_pair(texture, mparams);
    }

    void TextureData::apply(app::Material* mat) {
        if (!initialized) {
            load_texture();
            if (texture == 0) {
                return;
            }

            initialized = true;
        }

        if (texture.has_value()) {
            auto texture_ptr = get();
            if (texture_ptr != nullptr)
                il2cpp::invoke(mat, "set_mainTexture", texture_ptr);
        }
    }

    void TextureData::apply(app::Renderer* renderer, MaterialParams* extra) {
        apply_texture(renderer);
        apply_params(renderer, extra);
    }

    void TextureData::apply_texture(app::Renderer* renderer) {
        if (default_params.find(renderer) == default_params.end()) {
            add_default_param(renderer);
        }

        if (!initialized) {
            load_texture();
            if (texture == 0) {
                return;
            }

            initialized = true;
        }

        if (texture.has_value()) {
            auto texture_ptr = get();
            if (texture_ptr != nullptr)
                UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, reinterpret_cast<app::Texture*>(texture_ptr));
        }
    }

    void TextureData::apply_params(app::Renderer* renderer, MaterialParams* extra) {
        if (default_params.find(renderer) == default_params.end())
            add_default_param(renderer);

        auto param = extra != nullptr ? extra : &local;
        if (param->uvs.has_value())
            UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, param->uvs.value());

        if (param->scroll_rot.has_value())
            UberShaderAPI::SetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, param->scroll_rot.value());

        if (param->color.has_value())
            UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, param->color.value());
    }

    void TextureData::apply_texture_unity(app::Renderer* renderer) {
        if (!initialized) {
            load_texture();
            if (texture == 0) {
                return;
            }

            initialized = true;
        }

        if (texture.has_value()) {
            auto texture_ptr = get();
            if (texture_ptr != nullptr) {
                auto mat = UberShaderAPI::GetEditableMaterial(renderer);
                Material::SetTexture_1(mat, il2cpp::string_new("_MainTex"), reinterpret_cast<app::Texture*>(texture_ptr));
            }
        }
    }

    void TextureData::apply_params_unity(app::Renderer* renderer, MaterialParams* extra) {
        auto param = extra != nullptr ? extra : &local;
        // UVs need to be set on the mesh, no support for texture scroll rotation.

        if (param->color.has_value()) {
            auto mat = UberShaderAPI::GetEditableMaterial(renderer);
            Material::SetColor_1(mat, il2cpp::string_new("_Color"), param->color.value());
        }
    }

    app::Texture2D* TextureData::get() {
        if (!texture.has_value())
            return nullptr;

        auto texture_ptr = il2cpp::gchandle_target<app::Texture2D>(texture.value());
        if (!il2cpp::unity::is_valid(texture_ptr) && path.starts_with("file:")) {
            info("textures", "had to reload file texture.");
            reload_file_texture();
            texture_ptr = il2cpp::gchandle_target<app::Texture2D>(texture.value());
        }

        if (!il2cpp::unity::is_valid(texture_ptr))
            return nullptr;

        return texture_ptr;
    }

    void TextureData::reload_file_texture() {
        il2cpp::gchandle_free(texture.value());
        texture.reset();

        // TODO: Add refcount decrement.

        auto it = files.find(path);
        if (it != files.end())
            files.erase(it);

        load_texture();
        auto& collection = file_instances[path];
        for (auto data: collection)
            if (!data.expired())
                data.lock()->texture = texture;
    }

    void apply_default(app::Renderer* renderer) {
        if (default_params.find(renderer) == default_params.end())
            add_default_param(renderer);

        auto& pair = default_params[renderer];
        auto& param = pair.second;
        UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, il2cpp::gchandle_target<app::Texture>(pair.first));
        UberShaderAPI::SetTextureAtlasUVs(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, param.uvs.value());
        UberShaderAPI::SetTextureScrollRotData(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, param.scroll_rot.value());
        UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, param.color.value());
    }

    void TextureData::set_texture(app::Texture* texture_ptr) {
        texture = il2cpp::gchandle_new_weak(texture_ptr, true);
    }

    void TextureData::set_uvs(app::Vector4 uvs) {
        local.uvs = uvs;
    }

    void TextureData::set_scroll_rot(app::Vector4 scroll_rot) {
        local.scroll_rot = scroll_rot;
    }

    void TextureData::set_color(app::Color color) {
        local.color = color;
    }

    void TextureData::clear_overrides() {
        texture.reset();
        local.uvs.reset();
        local.scroll_rot.reset();
        local.color.reset();
    }

    std::shared_ptr<TextureData> create_texture() {
        auto data = std::make_shared<TextureData>();
        data->path = "custom";
        data->initialized = true;
        return data;
    }

    app::GameObject* texture_holder = nullptr;
    constexpr int HOLDER_SIZE = 500;
    int texture_count_0 = 0;

    app::GameObject* get_or_create_texture_holder() {
        if (texture_holder != nullptr)
            return texture_holder;

        texture_holder = types::GameObject::create();
        il2cpp::invoke(texture_holder, ".ctor");
        il2cpp::invoke(texture_holder, "set_name", il2cpp::string_new("TextureHolder"));
        core::api::game::add_to_container(core::api::game::RandoContainer::Randomizer, texture_holder);
        // TODO: Use UberShaderPrefabWarmer if we can figure out how to instantiate the List<Texture> class.
        auto holder = il2cpp::unity::add_component<app::SpiritShardUIShardBackdrop>(texture_holder, types::SpiritShardUIShardBackdrop::get_class());
        il2cpp::invoke(holder, ".ctor");
        holder->fields.Socket_0 = types::Texture::create_array(HOLDER_SIZE);
        return texture_holder;
    }

    void dont_unload_texture(app::Texture* texture) {
        auto go = get_or_create_texture_holder();
        auto holder = il2cpp::unity::get_component<app::SpiritShardUIShardBackdrop>(go, types::SpiritShardUIShardBackdrop::get_class());
        if (texture_count_0 >= HOLDER_SIZE) {
            return;
        }

        holder->fields.Socket_0->vector[texture_count_0++] = texture;
    }

    void clear_holder() {
        auto go = get_or_create_texture_holder();
        auto holder = il2cpp::unity::get_component<app::SpiritShardUIShardBackdrop>(go, types::SpiritShardUIShardBackdrop::get_class());
        for (auto i = 0; i < HOLDER_SIZE; ++i) {
            holder->fields.Socket_0->vector[i] = nullptr;
        }
    }

    void TextureData::load_texture() {
        try {
            texture = 0;
            auto separator = path.find(':', 0);
            auto type = std::string(path.substr(0, separator));
            auto value = std::string(path.substr(separator + 1));
            if (type.empty()) {
                return;
            }

            if (type == "shard") {
                auto actual_value = static_cast<app::SpiritShardType__Enum>(std::stoi(value));
                auto settings = types::SpiritShardSettings::get_class()->static_fields->Instance;
                if (settings != nullptr) {
                    auto item = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                    if (item != nullptr) {
                        texture = il2cpp::gchandle_new_weak(item->fields.InventoryIcon, true);
                    }
                }
            } else if (type == "ability") {
                auto actual_value = static_cast<app::AbilityType__Enum>(std::stoi(value));
                auto settings = types::SpellSettings::get_class()->static_fields->Instance;
                if (settings != nullptr) {
                    auto item = il2cpp::invoke<app::Texture2D>(settings->fields.CustomAbilityIcons, "GetValue", &actual_value);
                    if (item != nullptr) {
                        texture = il2cpp::gchandle_new_weak(item, true);
                    }
                }
            } else if (type == "spell") {
                auto actual_value = static_cast<app::EquipmentType__Enum>(std::stoi(value));
                auto settings = types::SpellSettings::get_class()->static_fields->Instance;
                auto item = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
                if (item != nullptr) {
                    texture = il2cpp::gchandle_new_weak(item->fields.InventoryIcon, true);
                }
            } else if (type == "opher") {
                auto actual_value = std::stoi(value);
                auto screen = types::WeaponmasterScreen::get_class()->static_fields->_Instance_k__BackingField;
                if (screen != nullptr) {
                    auto items = screen->fields.WeaponmasterItems;
                    if (actual_value >= 0 && actual_value < items->max_length) {
                        texture = il2cpp::gchandle_new_weak(items->vector[actual_value]->fields.Upgrade->fields.Icon, true);
                    }
                }
            } else if (type == "lupo") {
                auto actual_value = std::stoi(value);
                auto screen = types::MapmakerScreen::get_class()->static_fields->Instance;
                if (screen != nullptr) {
                    auto items = screen->fields.Purchases;
                    if (actual_value >= 0 && actual_value < items->max_length) {
                        texture = il2cpp::gchandle_new_weak(items->vector[actual_value]->fields.Icon, true);
                    }
                }
            } else if (type == "grom") {
                auto actual_value = std::stoi(value);
                auto screen = types::BuilderScreen::get_class()->static_fields->_Instance_k__BackingField;
                if (screen != nullptr) {
                    auto items = screen->fields.BuilderItems;
                    if (actual_value >= 0 && actual_value < items->max_length) {
                        texture = il2cpp::gchandle_new_weak(items->vector[grom_redirect[actual_value]]->fields.Project->fields.Icon, true);
                    }
                }
            } else if (type == "tuley") {
                auto actual_value = std::stoi(value);
                auto screen = types::GardenerScreen::get_class()->static_fields->_Instance_k__BackingField;
                if (screen != nullptr) {
                    auto items = screen->fields.GardenerItems;
                    if (actual_value >= 0 && actual_value < items->max_length) {
                        texture = il2cpp::gchandle_new(items->vector[actual_value]->fields.Project->fields.Icon, true);
                    }
                }
            } else if (type == "file") {
                auto it = files.find(path);
                if (it != files.end()) {
                    texture = it->second;
                    return;
                }

                auto texture_path = (base_path() / value).string();

                int x;
                int y;
                int n = 4;
                stbi_set_flip_vertically_on_load(true);
                unsigned char* png_data = stbi_load(texture_path.c_str(), &x, &y, &n, STBI_rgb_alpha);
                if (png_data == nullptr) {
                    auto icon = 0;
                    auto shard_icons = types::SpiritShardSettings::get_class()->static_fields->Instance->fields.Icons;
                    auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &icon);
                    texture = il2cpp::gchandle_new_weak(icons->fields.InventoryIcon, true);
                    modloader::warn("textures", std::format("failed to load texture {} ({}).", texture_path, stbi_failure_reason()));
                    return;
                }

                auto texture_ptr = types::Texture2D::create();

                auto format = n == 3 ? app::TextureFormat__Enum::RGB24 : app::TextureFormat__Enum::RGBA32;
                Texture2D::ctor_4(texture_ptr, x, y, format, false, false);
                Texture2D::LoadRawTextureData_1(texture_ptr, png_data, x * y * n);
                Texture2D::Apply_1(texture_ptr, true, false);
                stbi_image_free(png_data);
                texture = il2cpp::gchandle_new(texture_ptr, false);
                files[path] = texture.value();
                dont_unload_texture(reinterpret_cast<app::Texture*>(texture_ptr));
            } else {
                modloader::warn("textures", std::format("unknown texture protocol used when loading texture '{}'.", type));
            }
        } catch (std::exception e) {
            modloader::warn("textures", std::format("Fatal error fetching texture ({})", e.what()));
        }
    }

    bool validate_path(std::string_view path) {
        auto separator = path.find(':', 0);
        if (separator == -1)
            return false;

        auto type = std::string(path.substr(0, separator));
        auto value = std::string(path.substr(separator + 1));
        if (type == "shard") {
            auto actual_value = static_cast<app::SpiritShardType__Enum>(std::stoi(value));
            auto settings = types::SpiritShardSettings::get_class()->static_fields->Instance;
            auto item = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
            return item != nullptr;
        } else if (type == "ability") {
            auto actual_value = static_cast<app::AbilityType__Enum>(std::stoi(value));
            auto settings = types::SpellSettings::get_class()->static_fields->Instance;
            auto item = il2cpp::invoke<app::Texture2D>(settings->fields.CustomAbilityIcons, "GetValue", &actual_value);
            return item != nullptr;
        } else if (type == "spell") {
            auto actual_value = static_cast<app::EquipmentType__Enum>(std::stoi(value));
            auto settings = types::SpellSettings::get_class()->static_fields->Instance;
            auto item = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &actual_value);
            return item != nullptr;
        } else if (type == "opher") {
            auto actual_value = std::stoi(value);
            auto screen = types::WeaponmasterScreen::get_class()->static_fields->_Instance_k__BackingField;
            auto items = screen->fields.WeaponmasterItems;
            return actual_value >= 0 && actual_value < items->max_length;
        } else if (type == "lupo") {
            auto actual_value = std::stoi(value);
            auto screen = types::MapmakerScreen::get_class()->static_fields->Instance;
            auto items = screen->fields.Purchases;
            return actual_value >= 0 && actual_value < items->max_length;
        } else if (type == "grom") {
            auto actual_value = std::stoi(value);
            auto screen = types::BuilderScreen::get_class()->static_fields->_Instance_k__BackingField;
            auto items = screen->fields.BuilderItems;
            return actual_value >= 0 && actual_value < items->max_length;
        } else if (type == "tuley") {
            auto actual_value = std::stoi(value);
            auto screen = types::GardenerScreen::get_class()->static_fields->_Instance_k__BackingField;
            auto items = screen->fields.GardenerItems;
            return actual_value >= 0 && actual_value < items->max_length;
        } else if (type == "file")
            return true;

        return false;
    }

    std::shared_ptr<TextureData> get_texture(std::string_view path) {
        auto data = std::make_shared<TextureData>();
        data->path = std::string(path);
        data->load_texture();
        if (data->texture == 0) {
            return data;
        }

        data->initialized = true;
        if (path.starts_with("file:")) {
            file_instances[data->path].push_back(data);
        }

        return data;
    }

    void reload_all_file_textures() {
        clear_holder();

        files.clear();

        for (auto collection: file_instances) {
            for (auto it = collection.second.begin(); it != collection.second.end(); ++it) {
                if ((*it).expired()) {
                    continue;
                }

                auto data = it->lock();
                data->reload_file_texture();
                break;
            }
        }
    }
} // namespace core::textures
