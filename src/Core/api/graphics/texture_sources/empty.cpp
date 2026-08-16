#include <Core/api/graphics/textures.h>
#include <Modloader/app/methods/GardenerScreen.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <magic_enum/magic_enum.hpp>


namespace {
    using namespace app::classes;

    std::optional<il2cpp::GCRef<app::RenderTexture>> empty_texture;

    [[maybe_unused]]
    auto on_modloader_injection_complete = modloader::event_bus().register_handler(ModloaderEvent::InjectionComplete, [](auto) {
        core::api::graphics::textures::register_source("Empty", [](const std::string&) -> std::optional<app::Texture*> {
            if (!empty_texture.has_value()) {
                empty_texture = il2cpp::GCRef(core::api::graphics::textures::create_placeholder_render_texture());
            }

            return reinterpret_cast<app::Texture*>(empty_texture.value().ref());
        });
    });
} // namespace
