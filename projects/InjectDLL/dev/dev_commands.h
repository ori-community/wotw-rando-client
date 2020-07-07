#include <unordered_map>

namespace dev
{
    struct CommandParam
    {
        std::string name;
        std::string value;
    };

    struct Initialization
    {
        using init = void (*)();
        Initialization(init p_call);

        init call;
        Initialization* next;
    };

    using dev_command = void (*)(std::string const& name, std::vector<CommandParam> const& params);
    
    void initialization_callbacks();

    void console_initialize();
    void console_free();
    void console_poll();
    void console_send(std::string str);
    void console_flush();

    void register_command(std::string const& name, dev_command command);
    bool handle_message(std::string const& message);

    bool try_get_bool(CommandParam const& param, bool& value);
    bool try_get_int(CommandParam const& param, int& value);
    bool try_get_float(CommandParam const& param, float& value);

    bool try_convert_to_bool(std::string str, bool& value);
}

#define CALL_ON_INIT(func) dev::Initialization func##_init_struct(&func)
