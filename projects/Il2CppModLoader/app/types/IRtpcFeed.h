#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRtpcFeed {
        inline app::IRtpcFeed__Class** type_info = (app::IRtpcFeed__Class**)(modloader::win::memory::resolve_rva(0x0478E628));
        inline app::IRtpcFeed__Class* get_class() {
            return il2cpp::get_class<app::IRtpcFeed__Class>(type_info, "", "IRtpcFeed");
        }
    } // namespace IRtpcFeed
} // namespace app::classes::types
