#pragma once

#include <filesystem>
#include <unordered_map>

namespace randomizer::state_data {
    bool parse_state_data(std::filesystem::path path, std::unordered_map<core::api::uber_states::UberStateCondition, std::string>& states);
} // namespace randomizer::location_data
