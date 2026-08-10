#include <Core/api/graphics/textures.h>
#include <Modloader/modloader.h>
#include <Modloader/fs.h>
#include <Modloader/app/methods/UnityEngine/ImageConversion.h>
#include <Modloader/app/methods/UnityEngine/Texture.h>
#include <Modloader/app/methods/UnityEngine/Texture2D.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/Texture2D.h>
#include <Modloader/app/methods/System/IO/File.h>


namespace {
    using namespace app::classes;

    std::unordered_map<std::filesystem::path, std::optional<il2cpp::GCRef<app::Texture2D>>> textures;

    std::optional<app::Texture*> load_and_cache_file_texture(const std::filesystem::path& path) {
        const auto asset_path_csstring = il2cpp::string_new(path.string());

        if (System::IO::File::Exists(asset_path_csstring)) {
            const auto bytes = System::IO::File::ReadAllBytes(asset_path_csstring);
            const auto texture = types::Texture2D::create();
            UnityEngine::Texture2D::ctor_4(texture, 1, 1, app::TextureFormat__Enum::RGBA32, true, false);
            UnityEngine::Texture::set_wrapMode(reinterpret_cast<app::Texture*>(texture), app::TextureWrapMode__Enum::Clamp);
            UnityEngine::ImageConversion::LoadImage_1(texture, bytes, true);
            textures.emplace(path, texture);
            UnityEngine::Object::set_hideFlags(reinterpret_cast<app::Object_1*>(texture), app::HideFlags__Enum::DontUnloadUnusedAsset);

            return reinterpret_cast<app::Texture*>(texture);
        }

        textures.emplace(path, std::nullopt);
        return std::nullopt;
    }

    [[maybe_unused]]
    auto on_modloader_injection_complete = modloader::event_bus().register_handler(ModloaderEvent::InjectionComplete, [](auto) {
        core::api::graphics::textures::register_source("File", [](const std::string& id) -> std::optional<app::Texture*> {
            const auto confined_asset_path = modloader::fs::get_confined_asset_path(id);

            if (!confined_asset_path.has_value()) {
                return std::nullopt;
            }

            const auto it = textures.find(*confined_asset_path);
            if (it == textures.end()) {
                return load_and_cache_file_texture(*confined_asset_path);
            }

            return it->second.transform([](auto ref) {
                return reinterpret_cast<app::Texture*>(*ref);
            });
        });
    });
} // namespace
