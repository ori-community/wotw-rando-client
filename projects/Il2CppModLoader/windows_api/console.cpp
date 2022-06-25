#include <Common/ext.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <Il2CppModLoader/windows_api/windows.h>
#include <common.h>

#include <algorithm>
#include <future>
#include <iostream>
#include <map>
#include <mutex>
#include <regex>
#include <string>
#include <vector>

namespace modloader::win::console {
    namespace {
        std::string read_command() {
            std::string command;
            std::getline(std::cin, command);
            return command;
        }

        struct Action {
            bool should_run_on_main_thread;
            dev_command func;
        };

        struct Command {
            std::map<std::string, Command> sub_commands;
            std::vector<Action> actions;
        };

        Command root;

        bool initialzed = false;
        bool failed = false;
        FILE* console_file;
        std::future<std::string> console_input;
        std::vector<std::string> messages;
        std::mutex message_mutex;

        std::regex integer_regex("^[+-]?[0-9]+$");
        std::regex float_regex("^[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)$");
    } // namespace

    void register_command(std::vector<std::string> const& path, dev_command command, bool should_run_on_game_thread) {
        Command* current = &root;
        for (const auto& entry : path)
            current = &current->sub_commands[entry];

        current->actions.push_back(Action{ should_run_on_game_thread, command });
    }

    Command* find_command(std::vector<std::string> const& path) {
        Command* current = &root;
        for (const auto& entry : path) {
            auto it = current->sub_commands.find(entry);
            if (it == current->sub_commands.end())
                return nullptr;

            current = &it->second;
        }

        return current;
    }

    using command_queue = std::vector<std::tuple<std::string, std::vector<CommandParam>, dev_command>>;
    std::mutex command_mutex;
    command_queue queued_commands;

    void console_update() {
        command_mutex.lock();
        if (queued_commands.empty()) {
            command_mutex.unlock();
            return;
        }

        command_queue local = queued_commands;
        queued_commands.clear();
        command_mutex.unlock();

        for (auto const& command : local)
            std::get<2>(command)(std::get<0>(command), std::get<1>(command));
    }

    bool handle_message(std::string const& message) {
        if (message.empty())
            return false;

        std::vector<std::string> tokens;
        split_str(message, tokens);

        const auto path_str = tokens.front();
        std::vector<std::string> path;
        split_str(path_str, path, '.');

        tokens.erase(tokens.begin());
        auto* const command = find_command(path);
        if (command != nullptr) {
            std::vector<CommandParam> params;
            for (auto const& token : tokens) {
                if (token.empty())
                    continue;

                CommandParam param;
                const auto offset = token.find('=');
                if (offset == std::string::npos) {
                    param.name = "";
                    param.value = token;
                } else {
                    param.name = token.substr(0, offset);
                    param.value = token.substr(offset + 1, token.size());
                }

                params.push_back(param);
            }

            for (auto const& action : command->actions) {
                if (action.should_run_on_main_thread) {
                    command_mutex.lock();
                    queued_commands.push_back(std::make_tuple(path_str, params, action.func));
                    command_mutex.unlock();
                } else
                    action.func(path_str, params);
            }

            return true;
        }

        return false;
    }

    void console_initialize() {
        console_file = nullptr;
        initialzed = false;
        failed = true;
        if (!AllocConsole())
            return;

        auto err = freopen_s(&console_file, "CONOUT$", "w", stdout);
        if (err != 0)
            trace(MessageType::Warning, 4, "initialize", format("failed to open console output {stdout}: %d", err));

        err = freopen_s(&console_file, "CONOUT$", "w", stderr);
        if (err != 0)
            trace(MessageType::Warning, 4, "initialize", format("failed to open console output {stderr}: %d", err));

        err = freopen_s(&console_file, "CONIN$", "r", stdin);
        if (err != 0)
            trace(MessageType::Warning, 4, "initialize", format("failed to open console input {stdin}: %d", err));

        std::cout.clear();
        std::clog.clear();
        std::cerr.clear();
        std::cin.clear();

        SetConsoleCP(GetACP());
        SetConsoleOutputCP(GetACP());

        console_input = std::async(read_command);
        initialzed = true;
        failed = false;
    }

    void console_free() {
        if (!initialzed)
            return;

        if (console_file != nullptr)
            fclose(console_file);

        FreeConsole();
    }

    void list_commands() {
        console_send("");
        console_send("echo *");
        console_send("list *");

        std::vector<std::tuple<int, std::string, Command*>> commands;
        commands.push_back(std::make_tuple(-1, "", &root));
        while (!commands.empty()) {
            auto entry = commands.back();
            commands.erase(commands.end() - 1);

            auto* const command = std::get<2>(entry);
            std::string info;
            for (auto i = 0; i < std::get<0>(entry); ++i)
                info += "\t";

            info += std::get<1>(entry);
            if (!command->actions.empty())
                info += " *";

            if (!info.empty())
                console_send(info);

            const int index = commands.size();
            for (auto& sub_command : command->sub_commands)
                commands.insert(commands.begin() + index, std::make_tuple(std::get<0>(entry) + 1, sub_command.first, &sub_command.second));
        }

        console_send("");
    }

    void console_poll() {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        if (initialzed && console_input.wait_for(std::chrono::seconds(0)) == std::future_status::ready) {
            const auto command = console_input.get();
            if (command.rfind("echo ", 0) != std::string::npos)
                std::cout << command.substr(5, command.length()) << std::endl;
            else if (command == "list")
                list_commands();
            else
                handle_message(command);

            std::cin.clear();
            console_input = std::async(read_command);
        }

        console_flush();
    }

    void console_send(std::string str) {
        message_mutex.lock();
        messages.push_back(std::move(str));
        message_mutex.unlock();
    }

    void console_flush() {
        if (failed) {
            // If we did not create a console window clear the message queue.
            message_mutex.lock();
            messages.clear();
            message_mutex.unlock();
        } else {
            message_mutex.lock();
            auto messages_copy = messages;
            messages.clear();
            message_mutex.unlock();

            for (auto const& message : messages_copy)
                std::cout << message << std::endl;
        }
    }

    namespace {
        std::vector<std::string> false_values = {
            "false",
            "off",
            "0",
            "f"
        };

        std::vector<std::string> true_values = {
            "true",
            "on",
            "1",
            "t"
        };
    } // namespace

    bool try_convert_to_bool(std::string str, bool& value) {
        std::transform(str.begin(), str.end(), str.begin(), [](auto c) { return std::tolower(c); });

        if (std::find(true_values.begin(), true_values.end(), str) != true_values.end()) {
            value = true;
            return true;
        }

        if (std::find(false_values.begin(), false_values.end(), str) != false_values.end()) {
            value = false;
            return true;
        }

        return false;
    }

    bool try_get_bool(CommandParam const& param, bool& value) {
        return try_convert_to_bool(param.value, value);
    }

    bool try_get_int(CommandParam const& param, int& value) {
        if (std::regex_match(param.value, integer_regex)) {
            value = std::stoi(param.value);
            return true;
        }

        return false;
    }

    bool try_get_float(CommandParam const& param, float& value) {
        if (std::regex_match(param.value, float_regex)) {
            value = std::stof(param.value);
            return true;
        }

        return false;
    }
} // namespace modloader::win::console
