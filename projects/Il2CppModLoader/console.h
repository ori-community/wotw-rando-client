#include <Il2CppModLoader/macros.h>

#include <string>
#include <vector>
#include <unordered_map>

namespace modloader
{
    namespace console
    {
        struct CommandParam
        {
            std::string name;
            std::string value;
        };

        using dev_command = void (*)(std::string const& name, std::vector<CommandParam> const& params);

        IL2CPP_MODLOADER_DLLEXPORT void console_initialize();
        IL2CPP_MODLOADER_DLLEXPORT void console_free();
        IL2CPP_MODLOADER_DLLEXPORT void console_poll();
        IL2CPP_MODLOADER_DLLEXPORT void console_send(std::string str);
        IL2CPP_MODLOADER_DLLEXPORT void console_flush();

        IL2CPP_MODLOADER_DLLEXPORT void register_command(std::vector<std::string> const& path, dev_command command);
        IL2CPP_MODLOADER_DLLEXPORT bool handle_message(std::string const& message);

        IL2CPP_MODLOADER_DLLEXPORT bool try_get_bool(CommandParam const& param, bool& value);
        IL2CPP_MODLOADER_DLLEXPORT bool try_get_int(CommandParam const& param, int& value);
        IL2CPP_MODLOADER_DLLEXPORT bool try_get_float(CommandParam const& param, float& value);

        IL2CPP_MODLOADER_DLLEXPORT bool try_convert_to_bool(std::string str, bool& value);
    }
}
