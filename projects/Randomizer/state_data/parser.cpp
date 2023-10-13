#include <Common/ext.h>

#include <Randomizer/state_data/parser.h>

#include <fstream>
#include <magic_enum.hpp>

namespace randomizer::state_data {
    bool parse_state_data(std::filesystem::path path, std::vector<State>& states) {
        // Example line: HowlsDen.DoubleJumpTreeCombat, 9593, 25130, 3
        std::ifstream state_data_file(path);
        if (!state_data_file.is_open()) {
            return false;
        }

        std::string line;
        while (std::getline(state_data_file, line)) {
            State state;
            std::vector<std::string> parts;
            split_str(line, parts, ',');

            for (auto &item: parts) {
                trim(item);
            }

            state.name = parts[0];
            auto success = core::api::uber_states::parse_condition(
                { parts[1], parts[2] + (parts[3].empty() ? "" : ">=" + parts[3]) },
                state.condition
            );

            if (!success) {
                continue;
            }

            states.push_back(state);
        }

        state_data_file.close();
        return true;
    }
} // namespace randomizer::location_data
