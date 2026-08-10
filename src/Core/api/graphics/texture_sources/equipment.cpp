#include <Core/api/graphics/textures.h>
#include <Modloader/app/methods/SpellSettings.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <magic_enum/magic_enum.hpp>
#include <Modloader/app/types/Texture2D.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons__Boxed.h>


namespace {
    using namespace app::classes;

    core::api::graphics::textures::RenderTextureCache<app::EquipmentType__Enum> texture_cache;

    IL2CPP_INTERCEPT(void, SpellSettings, Awake, app::SpellSettings* this_ptr) {
        next::SpellSettings::Awake(this_ptr);

        for (auto enum_value: magic_enum::enum_values<app::EquipmentType__Enum>()) {
            const auto icons = il2cpp::invoke<app::SpellIconsCollection_Icons__Boxed>(this_ptr->fields.Icons, "GetValue", &enum_value);
            const auto source_texture = icons->fields.InventoryIcon;
            const auto texture = texture_cache.get_render_texture(enum_value);
            core::api::graphics::textures::copy_texture_into_render_texture(source_texture, texture);
        }
    }

    [[maybe_unused]]
    auto on_modloader_injection_complete = modloader::event_bus().register_handler(ModloaderEvent::InjectionComplete, [](auto) {
        core::api::graphics::textures::register_source("Equipment", [](const std::string& id) -> std::optional<app::Texture*> {
            const auto id_enum = static_cast<app::EquipmentType__Enum>(std::stoi(id));
            return texture_cache.get_texture(id_enum);
        });
    });
} // namespace
