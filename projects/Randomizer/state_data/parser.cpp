#include <Common/ext.h>

#include <Core/api/uber_states/uber_state_condition.h>
#include <Randomizer/state_data/parser.h>

#include <fstream>
#include <magic_enum/magic_enum.hpp>

namespace randomizer::state_data {
    bool parse_state_data(std::filesystem::path path, std::unordered_map<core::api::uber_states::UberStateCondition, std::string>& states) {
        // Example line: HowlsDen.DoubleJumpTreeCombat, 9593, 25130, 3
        std::ifstream state_data_file(path);
        if (!state_data_file.is_open()) {
            return false;
        }

        std::string line;
        while (std::getline(state_data_file, line)) {
            std::vector<std::string> parts;
            split_str(line, parts, ',');

            for (auto &item: parts) {
                trim(item);
            }

            const auto name = parts[0];
            core::api::uber_states::UberStateCondition condition;

            auto success = core::api::uber_states::parse_condition(
                { parts[1], parts[2] + (parts[3].empty() ? "" : ">=" + parts[3]) },
                condition
            );

            if (!success) {
                continue;
            }

            states.insert({ condition, name });
        }

        state_data_file.close();
        return true;
    }
} // namespace randomizer::location_data
