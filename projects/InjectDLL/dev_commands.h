#include <unordered_map>

namespace dev
{
    using dev_command = void (*)(std::string const& name, std::unordered_map<std::string, std::string> const& params);

    struct Initialization
    {
        using init = void (*)();
        Initialization(init p_call);

        init call;
        Initialization* next;
    };
    
    void initialization_callbacks();

    void console_initialize();
    void console_free();
    void console_poll();
    void console_send(std::string str);

    void register_command(std::string const& name, dev_command command);
    bool handle_message(std::string const& message);
}

#define CALL_ON_INIT(func) dev::Initialization func##_init_struct(&func)
