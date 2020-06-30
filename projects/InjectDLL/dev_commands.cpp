#include <dev_commands.h>
#include <common.h>
#include <csharp_bridge.h>
#include <Common/ext.h>

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <future>

namespace dev
{
    namespace
    {
        template <class Container>
        void split_str(const std::string& str, Container& cont, char delim = ' ')
        {
            std::stringstream ss(str);
            std::string token;
            while (std::getline(ss, token, delim))
                cont.push_back(token);
        }

        std::string read_command()
        {
            std::string command;
            std::getline(std::cin, command);
            return command;
        }

        Initialization* start = nullptr;

        std::unordered_map<std::string, std::vector<dev_command>> entries;

        bool initialzed;
        FILE* console_file;
        std::future<std::string> console_input;
        std::vector<std::string> messages;
        std::mutex message_mutex;
    }

    Initialization::Initialization(Initialization::init p_call)
        : next(start)
        , call(p_call)
    {
        start = this;
    }

    void initialization_callbacks()
    {
        auto it = start;
        while (it != nullptr)
        {
            it->call();
            it = it->next;
        }
    }

    void register_command(std::string const& name, dev_command command)
    {
        auto& entry = entries[name];
        entry.push_back(command);
    }

    bool handle_message(std::string const& message)
    {
        if (message.empty())
            return false;

        std::vector<std::string> tokens;
        split_str(message, tokens);

        auto name = tokens.front();
        tokens.erase(tokens.begin());
        auto it = entries.find(name);
        if (it != entries.end())
        {
            std::unordered_map<std::string, std::string> params;
            for (auto const& token : tokens)
            {
                if (token.empty())
                    continue;

                auto offset = token.find('=');
                if (offset == std::string::npos)
                    params[token] = "";
                else
                    params[token.substr(0, offset)] = token.substr(offset + 1, token.size());
            }

            for (auto const& command : it->second)
                command(name, params);

            return true;
        }

        return false;
    }

    void console_initialize()
    {
        console_file = nullptr;
        initialzed = false;
        if (!csharp_bridge::check_ini("Dev"))
            return;
        
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
    }

    void console_free()
    {
        if (!initialzed)
            return;

        if (console_file != nullptr)
            fclose(console_file);

        FreeConsole();

    }

    void console_poll()
    {
        if (!initialzed)
            return;

        if (console_input.wait_for(std::chrono::seconds(0)) == std::future_status::ready)
        {
            auto command = console_input.get();
            if (command.rfind("echo ", 0) != std::string::npos)
                std::cout << command.substr(5, command.length()) << std::endl;
            else
                handle_message(command);

            console_input = std::async(read_command);
        }

        message_mutex.lock();
        auto messages_copy = messages;
        messages.clear();
        message_mutex.unlock();

        for (auto const& message : messages_copy)
            std::cout << message << std::endl;
    }

    void console_send(std::string str)
    {
        message_mutex.lock();
        messages.push_back(std::move(str));
        message_mutex.unlock();
    }

    namespace
    {
        std::vector<std::string> false_values = {
            "false",
            "0",
            "f"
        };

        std::vector<std::string> true_values = {
            "true",
            "1",
            "t"
        };
    }

    bool try_convert_to_bool(std::string str, bool& value)
    {
        std::transform(str.begin(), str.end(), str.begin(),
            [](auto c) { return std::tolower(c); });

        if (std::find(true_values.begin(), true_values.end(), str) != true_values.end())
        {
            value = true;
            return true;
        }

        if (std::find(false_values.begin(), false_values.end(), str) != false_values.end())
        {
            value = true;
            return true;
        }

        return false;
    }
}
