#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Logger {
        inline app::Logger__Class** type_info = (app::Logger__Class**)(modloader::win::memory::resolve_rva(0x04791180));
        inline app::Logger__Class* get_class() {
            return il2cpp::get_class<app::Logger__Class>(type_info, "UnityEngine", "Logger");
        }
        inline app::Logger* create() {
            return il2cpp::create_object<app::Logger>(get_class());
        }
    } // namespace Logger
} // namespace app::classes::types
