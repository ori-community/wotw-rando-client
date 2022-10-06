#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateManager__Class** type_info;
        inline app::UpdateManager__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager__Class>(type_info, "Moon.Driver", "UpdateManager");
        }
        inline app::UpdateManager* create() {
            return il2cpp::create_object<app::UpdateManager>(get_class());
        }
        inline app::UpdateManager__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateManager__Array>(get_class(), size);
        }
        inline app::UpdateManager__Array* create_array(const std::vector<app::UpdateManager*>& items) {
            return il2cpp::array_new<app::UpdateManager__Array>(get_class(), items);
        }
    } // namespace UpdateManager
} // namespace app::classes::types
