#include <Core/api/graphics/textures.h>
#include <Modloader/app/methods/GardenerScreen.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <magic_enum/magic_enum.hpp>


namespace {
    using namespace app::classes;

    core::api::graphics::textures::RenderTextureCache<std::size_t> texture_cache;

    IL2CPP_INTERCEPT(void, GardenerScreen, Init, app::GardenerScreen* this_ptr) {
        next::GardenerScreen::Init(this_ptr);

        for (int i = 0; i < this_ptr->fields.GardenerItems->max_length; ++i) {
            const auto source_texture = this_ptr->fields.GardenerItems->vector[i]->fields.Project->fields.Icon;
            const auto texture = texture_cache.get_render_texture(i);
            core::api::graphics::textures::copy_texture_into_render_texture(source_texture, texture);
        }
    }

    [[maybe_unused]]
    auto on_modloader_injection_complete = modloader::event_bus().register_handler(ModloaderEvent::InjectionComplete, [](auto) {
        core::api::graphics::textures::register_source("Tuley", [](const std::string& id) -> std::optional<app::Texture*> {
            return texture_cache.get_texture(std::stoi(id));
        });
    });
} // namespace
