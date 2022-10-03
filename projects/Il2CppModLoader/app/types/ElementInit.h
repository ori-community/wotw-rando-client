#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ElementInit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ElementInit__Class** type_info;
        inline app::ElementInit__Class* get_class() {
            return il2cpp::get_class<app::ElementInit__Class>(type_info, "System.Linq.Expressions", "ElementInit");
        }
        inline app::ElementInit* create() {
            return il2cpp::create_object<app::ElementInit>(get_class());
        }
        inline app::ElementInit__Array* create_array(int size) {
            return il2cpp::array_new<app::ElementInit__Array>(get_class(), size);
        }
    } // namespace ElementInit
} // namespace app::classes::types
