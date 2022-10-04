#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuPage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDebugMenuPage__Class** type_info;
        inline app::IDebugMenuPage__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPage__Class>(type_info, "", "IDebugMenuPage");
        }
        inline app::IDebugMenuPage* create() {
            return il2cpp::create_object<app::IDebugMenuPage>(get_class());
        }
        inline app::IDebugMenuPage__Array* create_array(int size) {
            return il2cpp::array_new<app::IDebugMenuPage__Array>(get_class(), size);
        }
    } // namespace IDebugMenuPage
} // namespace app::classes::types
