#pragma once

#include <Core/api/uber_states/uber_state_condition.h>

#include <variant>

namespace core::ipc::console {
    enum class CommandParameterType {
        String,
        Int,
        Float,
        UberState,
        UberStateCondition,
    };

    struct CommandParameter {
        CommandParameterType type;
        std::string name;
        std::string description;
        bool is_optional;
    };

    using paramter_t = std::variant<std::string, int, float, api::uber_states::UberState, api::uber_states::UberStateCondition>;
    using named_args_t = std::unordered_map<std::string, paramter_t>;
    using ipc_console_command_t = std::function<void(std::string const& command, named_args_t named_args)>;
    void register_command(std::string const& path, const std::vector<CommandParameter>& args, ipc_console_command_t command);
}
