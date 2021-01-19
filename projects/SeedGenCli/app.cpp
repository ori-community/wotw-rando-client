#include <app.h>

#include <area_tree.h>
#include <area/tokenizer.h>

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#else
#include <unistd.h>
#endif

enum class Difficulty
{
    Moki,
    Gorlek
};

struct ApplicationParameters
{
    bool valid = false;

    bool wait_on_debugger = false;
    bool unsafe = false;
    bool gen_spoilers = false;
    bool use_quests = false;
    bool items_on_hints = false;

    bool validate_logic = false;

    Difficulty difficulty = Difficulty::Moki;

    std::string_view area_path;
};

void trim_comments(std::string_view& view)
{
    const auto comment = view.find('#');
    if (comment != std::string::npos)
        view.remove_suffix(view.size() - comment);

    while (!view.empty() && isspace(view.back()))
        view.remove_suffix(1);
}

ApplicationParameters handle_arguments(const int argument_count, const char** arguments) noexcept
{
    ApplicationParameters parameters;
    // Skip number 1 since that's the path to our executable.
    for (auto i = 1; i < argument_count; ++i)
    {
        const std::string_view argument(arguments[i]);
        if (argument == "-debug")
            parameters.wait_on_debugger = true;
        else if (argument == "-unsafe")
            parameters.unsafe = true;
        else if (argument == "-spoilers")
            parameters.gen_spoilers = true;
        else if (argument == "-quests")
            parameters.use_quests = true;
        else if (argument == "-no_hints")
            parameters.items_on_hints = true;
        else if (argument == "-validate_logic")
            parameters.validate_logic = true;
        else if (argument == "-area")
        {
            if (i + 1 >= argument_count)
                return parameters;
            
            parameters.area_path = arguments[i + 1];
            // TODO: Check if path exists and is sane.
            ++i;
        }
        else if (argument == "-difficulty")
        {
            if (i + 1 >= argument_count)
                return parameters;

            const std::string_view difficulty(arguments[i + 1]);
            if (difficulty == "moki")
                parameters.difficulty = Difficulty::Moki;
            else if (difficulty == "gorlek")
                parameters.difficulty = Difficulty::Gorlek;
            else
            {
                std::cerr << "Unexpected difficulty: " << difficulty << std::endl;
                return parameters;
            }
            
            ++i;
        }
        else
        {
            std::cerr << "Unexpected argument: " << argument << std::endl;
            return parameters;
        }
    }

    parameters.valid = true;
    return parameters;
}

int main(const int argument_count, const char** arguments) noexcept
{
    const auto parameters = handle_arguments(argument_count, arguments);
    if (!parameters.valid)
        return -1;

    if (parameters.wait_on_debugger)
    {
        std::cout << "Waiting for debugger." << std::endl;
        while (!IsDebuggerPresent())
            Sleep(100);
    }
    
    // Read piped header.
    std::stringstream input;
    input << std::cin.rdbuf();
    auto header = input.str();

    std::ifstream area_file(parameters.area_path.data());
    std::string contents;
    std::string line;
    while (std::getline(area_file, line))
    {
        std::string_view view(line);
        trim_comments(view);
        contents += view;
        contents.push_back('\n');
    }

    auto tokens = area::tokenize(contents);

    //seedgen::AreaTree tree;
    //seedgen::area::parse(tree, { "moki" }, area_file);
    //area_file.close();

    // TODO: Parse area file.
    // TODO: Parse header.
    // TODO: Make seed.

    return 0;
}
