#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugMenuPage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugMenuPage__Class** type_info;
        inline app::DebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuPage__Class>(type_info, "", "DebugMenuPage");
        }
        inline app::DebugMenuPage* create() {
            return il2cpp::create_object<app::DebugMenuPage>(get_class());
        }
        inline app::DebugMenuPage__Array* create_array(int size) {
            return il2cpp::array_new<app::DebugMenuPage__Array>(get_class(), size);
        }
        inline app::DebugMenuPage__Array* create_array(const std::vector<app::DebugMenuPage*>& items) {
            return il2cpp::array_new<app::DebugMenuPage__Array>(get_class(), items);
        }
    } // namespace DebugMenuPage
} // namespace app::classes::types
