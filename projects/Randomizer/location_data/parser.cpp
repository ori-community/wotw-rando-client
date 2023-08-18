#include <Common/ext.h>

#include <Randomizer/location_data/parser.h>

#include <fstream>
#include <magic_enum.hpp>

namespace randomizer::location_data {
    bool parse_location_data(std::filesystem::path path, location_data_emitter emitter) {
        // Example line: MarshSpawn.RockHC, Inkwater Marsh, Resource, Life, swampStateGroup, 21786, healthContainerA, 60210, -958, -4313
        std::ifstream location_data_file(path);
        if (!location_data_file.is_open()) {
            return false;
        }

        std::string line;
        while (std::getline(location_data_file, line)) {
            Location location;
            std::vector<std::string> parts;
            split_str(line, parts, ',');

            for (auto &item: parts) {
                trim(item);
            }

            if (parts[9] != "0" && parts[10] != "0") {
                app::Vector2 position;
                if (!string_convert(parts[9], position.x) || !string_convert(parts[10], position.y)) {
                    continue;
                }

                location.position = position;
            }

            location.area = name_to_area(parts[1]);
            if (location.area == GameArea::TOTAL) {
                continue;
            }

            location.name = parts[0];
            auto type = magic_enum::enum_cast<LocationType>(parts[2] == "Resource" ? parts[3] : parts[2]);
            if (!type.has_value()) {
                continue;
            }

            location.type = type.value();
            auto success = core::api::uber_states::parse_condition(
                { parts[5], parts[7] + (parts[8].empty() ? "" : ">=" + parts[8]) },
                location.condition
            );

            if (!success) {
                continue;
            }

            emitter(location);
        }

        location_data_file.close();
        return true;
    }
} // namespace randomizer::location_data
