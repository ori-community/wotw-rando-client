#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EndPointManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EndPointManager__Class** type_info;
        inline app::EndPointManager__Class* get_class() {
            return il2cpp::get_class<app::EndPointManager__Class>(type_info, "System.Net", "EndPointManager");
        }
        inline app::EndPointManager* create() {
            return il2cpp::create_object<app::EndPointManager>(get_class());
        }
    } // namespace EndPointManager
} // namespace app::classes::types
