#pragma once

#include <string>
#include <unordered_map>

namespace modloader::win::detours {
    void start_transaction();
    void* do_intercept(const std::string& debug, void** original_pointer, void* intercept_pointer);
    void detach(void** original_pointer, void* intercept_pointer);
    void commit(std::string_view what);
}