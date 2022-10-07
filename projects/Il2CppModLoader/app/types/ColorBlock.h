#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorBlock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorBlock__Class** type_info;
        inline app::ColorBlock__Class* get_class() {
            return il2cpp::get_class<app::ColorBlock__Class>(type_info, "UnityEngine.UI", "ColorBlock");
        }
        inline app::ColorBlock* create() {
            return il2cpp::create_object<app::ColorBlock>(get_class());
        }
        inline app::ColorBlock__Boxed* box(app::ColorBlock value) {
            return il2cpp::box_value<app::ColorBlock__Boxed>(get_class(), value);
        }
        inline app::ColorBlock__Array* create_array(int size) {
            return il2cpp::array_new<app::ColorBlock__Array>(get_class(), size);
        }
        inline app::ColorBlock__Array* create_array(const std::vector<app::ColorBlock>& items) {
            return il2cpp::array_new<app::ColorBlock__Array>(get_class(), items);
        }
    } // namespace ColorBlock
} // namespace app::classes::types
