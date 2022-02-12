#pragma once

#include <string_view>

namespace ipc
{
    void update_pipe();
    void send_message(std::string_view message);
    void join_ipc_thread();
}
