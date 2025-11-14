#include <Modloader/modloader.h>
#include <magic_enum/magic_enum.hpp>

#include <nlohmann/json.hpp>
#include <string>
#include <utility>

#include <Core/ipc/console.h>
#include <Core/ipc/ipc.h>

using namespace modloader;

using namespace core::ipc;

namespace core::ipc::console {
    namespace {
        NLOHMANN_JSON_SERIALIZE_ENUM(
                LogLevel,
                {
                        { LogLevel::Debug, "Debug" },
                        { LogLevel::Info, "Info" },
                        { LogLevel::Warning, "Warning" },
                        { LogLevel::Error, "Error" },
                }
        );

        class IPCLoggingHandler final : public ILoggingHandler {
        public:
            explicit IPCLoggingHandler(LogLevel max_log_level) :
                ILoggingHandler(max_log_level) {}

        protected:
            void write_internal(LogLevel type, std::string const& group, std::string const& message) override {
                nlohmann::json json;
                json["type"] = "log_message";
                json["payload"]["type"] = type;
                json["payload"]["group"] = group;
                json["payload"]["message"] = message;
                send_message(json);
            }
        };

        std::shared_ptr<IPCLoggingHandler> ipc_logging_handler;

        void start_logging(const nlohmann::json& j) {
            ipc_logging_handler = std::make_shared<IPCLoggingHandler>(LogLevel::Debug);
        }

        struct Command {
            std::unordered_map<std::string, CommandParameter> named_parameters;
            ipc_console_command_t command;
        };

        std::unordered_map<std::string, Command> console_commands;

        void console_response(std::string_view response) {
            nlohmann::json json;
            json["type"] = "console_response";
            json["payload"]["message"] = response;
            send_message(json);
        }

        std::optional<paramter_t> parse_parameter(CommandParameterType type, std::string const& content) {
            switch (type) {
                case CommandParameterType::String:
                    return content;
                case CommandParameterType::Int:
                    return std::stoi(content);
                case CommandParameterType::Float:
                    return std::stof(content);
                case CommandParameterType::UberState: {
                    std::vector<std::string> parts;
                    split_str(content, parts, '|');
                    return parts.size() == 2
                        ? std::make_optional(api::uber_states::UberState(std::stoi(parts[0]), std::stoi(parts[1])))
                        : std::nullopt;
                }
                case CommandParameterType::UberStateCondition: {
                    api::uber_states::UberStateCondition condition;
                    return parse_condition(content, condition)
                        ? std::make_optional(condition)
                        : std::nullopt;
                }
                default:
                    return std::nullopt;
            }
        }

        void console_command(const nlohmann::json& j) {
            auto p = j.at("payload");
            const auto command_name = p.at("command").get<std::string>();
            auto const& command = console_commands.find(command_name);
            if (command == console_commands.end()) {
                console_response(std::format("Failed to find command '{}'", command_name));
                return;
            }

            named_args_t arguments;
            for (auto json_param: p.at("parameters")) {
                auto name = json_param.at("name").get<std::string>();
                auto param = command->second.named_parameters.find(name);
                if (param == command->second.named_parameters.end()) {
                    console_response(std::format("Failed to find command '{}'", command_name));
                    return;
                }

                auto value = json_param.at("value").get<std::string>();
                auto param_value = parse_parameter(param->second.type, value);
                if (!param_value.has_value()) {
                    console_response(
                        std::format("Failed to parse parameter '{}' to type '{}'",
                            param->first,
                            magic_enum::enum_name(param->second.type)
                        )
                    );

                    return;
                }

                arguments[name] = param_value.value();
            }

            command->second.command(command_name, arguments);
        }

        void console_command_info(const nlohmann::json& j) {
            auto p = j.at("payload");
            auto const& command = console_commands[p["command"]];

            auto response = respond_to(j);
            auto parameters = response["payload"]["parameters"];
            for (auto [type, name, description, is_optional]: command.named_parameters | std::views::values) {
                auto& param_json = parameters.emplace_back();
                param_json["name"] = name;
                param_json["type"] = type;
                param_json["description"] = description;
                param_json["is_optional"] = is_optional;
            }

            send_message(response);
        }

        void console_command_list(const nlohmann::json& j) {
            auto response = respond_to(j);
            for (const auto& command_name: console_commands | std::views::keys) {
                response["payload"]["list"].push_back(command_name);
            }

            send_message(response);
        }

        auto on_game_ready = event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            register_request_handler("start_logging", start_logging);
            register_request_handler("console_command", console_command);
            register_request_handler("console_command_info", console_command_info);
            register_request_handler("console_commands_list", console_command_list);
        });
    } // namespace

    void register_command(std::string const& path, const std::vector<CommandParameter>& args, ipc_console_command_t command) {
        std::unordered_map<std::string, CommandParameter> arguments;
        for (const auto& argument: args) {
            arguments[argument.name] = argument;
        }

        console_commands[path] = Command{
            arguments,
            std::move(command)
        };
    }
} // namespace randomizer::ipc
