#include <Randomizer/randomizer.h>
#include <Randomizer/seed/instruction_utils.h>

namespace randomizer::seed {
    /**
     * Converts a json representation of a texture to a texture identifier (string)
     * used in the client.
     */
    std::string get_texture_identifier_from_json(const nlohmann::json& j) {
        const auto icon = j.begin();
        const auto& key = icon.key();

        if (key == "Shard") {
            return std::format("shard:{}", icon.value().get<int>());
        }

        if (key == "Ability") {
            return std::format("ability:{}", icon.value().get<int>());
        }

        if (key == "Equipment") {
            return std::format("spell:{}", icon.value().get<int>());
        }

        if (key == "Opher") {
            return std::format("opher:{}", icon.value().get<int>());
        }

        if (key == "Lupo") {
            return std::format("lupo:{}", icon.value().get<int>());
        }

        if (key == "Grom") {
            return std::format("grom:{}", icon.value().get<int>());
        }

        if (key == "Tuley") {
            return std::format("tuley:{}", icon.value().get<int>());
        }

        if (key == "File") {
            return std::format("file:{}", icon.value().get<std::string>());
        }

        if (key == "Bundle") {
            return std::format("bundle:{}", icon.value().get<std::string>());
        }

        throw RandoException(std::format("Invalid icon type '{}'", key));
    }
} // namespace randomizer::seed
