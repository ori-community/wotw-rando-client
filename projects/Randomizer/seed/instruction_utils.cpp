#include <Randomizer/randomizer.h>
#include <Randomizer/seed/instruction_utils.h>

namespace randomizer::seed {
    std::string parse_texture(const nlohmann::json& j) {
        const auto icon = j.begin();
        const auto& key = icon.key();
        if (key == "Shard") {
            return std::format("shard:{}", icon.value().get<int>());
        } else if (key == "Ability") {
            return std::format("ability:{}", icon.value().get<int>());
        } else if (key == "Equipment") {
            return std::format("spell:{}", icon.value().get<int>());
        } else if (key == "Opher") {
            return std::format("opher:{}", icon.value().get<int>());
        } else if (key == "Lupo") {
            return std::format("lupo:{}", icon.value().get<int>());
        } else if (key == "Grom") {
            return std::format("grom:{}", icon.value().get<int>());
        } else if (key == "Tuley") {
            return std::format("tuley:{}", icon.value().get<int>());
        } else if (key == "File") {
            return std::format("file:{}", icon.value().get<std::string>());
        } else if (key == "Bundle") {
            return std::format("bundle:{}", icon.value().get<std::string>());
        } else {
            throw RandoException(std::format("Invalid icon type '{}'", key));
        }
    }
}
