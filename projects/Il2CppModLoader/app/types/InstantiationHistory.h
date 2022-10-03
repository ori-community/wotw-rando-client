#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiationHistory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiationHistory__Class** type_info;
        inline app::InstantiationHistory__Class* get_class() {
            return il2cpp::get_class<app::InstantiationHistory__Class>(type_info, "", "InstantiationHistory");
        }
        inline app::InstantiationHistory* create() {
            return il2cpp::create_object<app::InstantiationHistory>(get_class());
        }
    } // namespace InstantiationHistory
} // namespace app::classes::types
