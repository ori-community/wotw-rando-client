#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServicePointManager {
        inline app::ServicePointManager__Class** type_info = (app::ServicePointManager__Class**)(modloader::win::memory::resolve_rva(0x04752FC8));
        inline app::ServicePointManager__Class* get_class() {
            return il2cpp::get_class<app::ServicePointManager__Class>(type_info, "System.Net", "ServicePointManager");
        }
        inline app::ServicePointManager* create() {
            return il2cpp::create_object<app::ServicePointManager>(get_class());
        }
    } // namespace ServicePointManager
} // namespace app::classes::types
