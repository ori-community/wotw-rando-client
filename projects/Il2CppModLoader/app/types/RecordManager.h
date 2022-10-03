#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecordManager__Class** type_info;
        inline app::RecordManager__Class* get_class() {
            return il2cpp::get_class<app::RecordManager__Class>(type_info, "System.Data", "RecordManager");
        }
        inline app::RecordManager* create() {
            return il2cpp::create_object<app::RecordManager>(get_class());
        }
    } // namespace RecordManager
} // namespace app::classes::types
