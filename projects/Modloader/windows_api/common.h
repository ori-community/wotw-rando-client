#pragma once

#include <cstdint>
#include <string>

namespace modloader::win::common {
    void sleep(uint64_t ms);
    bool is_debugger_present();
    void free_library_and_exit_thread(std::string_view library, unsigned long exit_code = 0);
}