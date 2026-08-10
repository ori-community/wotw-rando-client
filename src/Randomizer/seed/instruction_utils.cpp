#include <Randomizer/randomizer.h>
#include <Randomizer/seed/instruction_utils.h>

namespace randomizer::seed {
    /**
     * Converts a JSON representation of a texture to a texture identifier (string)
     * used in the client.
     */
    core::api::graphics::textures::TextureIdentifier get_texture_identifier_from_json(const nlohmann::json& j) {
        const auto icon = j.begin();
        const auto& key = icon.key();

        if (icon.value().is_string()) {
            return core::api::graphics::textures::TextureIdentifier(key, icon.value().get<std::string>());
        }

        return core::api::graphics::textures::TextureIdentifier(key, std::to_string(icon.value().get<std::size_t>()));
    }
} // namespace randomizer::seed
