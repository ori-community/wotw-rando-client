#pragma once

#include <cstdint>
#include <string>
#include <Modloader/macros.h>

namespace modloader::win::common {
    IL2CPP_MODLOADER_DLLEXPORT void sleep(uint64_t ms);
    IL2CPP_MODLOADER_DLLEXPORT bool is_debugger_present();
    IL2CPP_MODLOADER_DLLEXPORT void free_library_and_exit_thread(std::string_view library, unsigned long exit_code = 0);
    IL2CPP_MODLOADER_DLLEXPORT void force_exit(uint8_t exit_code);
}