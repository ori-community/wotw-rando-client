#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Mask_1 {
        namespace {
            app::Mask_1__Class* type_info_ref = nullptr;
        }
        app::Mask_1__Class** type_info = &type_info_ref;
        inline app::Mask_1__Class* get_class() {
            return il2cpp::get_class<app::Mask_1__Class>(type_info, "UnityEngine.UI", "Mask");
        }
        inline app::Mask_1* create() {
            return il2cpp::create_object<app::Mask_1>(get_class());
        }
        inline app::Mask_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Mask_1__Array>(get_class(), size);
        }
        inline app::Mask_1__Array* create_array(const std::vector<app::Mask_1*>& items) {
            return il2cpp::array_new<app::Mask_1__Array>(get_class(), items);
        }
    } // namespace Mask_1
} // namespace app::classes::types
