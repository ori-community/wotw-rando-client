#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UILineInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UILineInfo__Class** type_info;
        inline app::UILineInfo__Class* get_class() {
            return il2cpp::get_class<app::UILineInfo__Class>(type_info, "UnityEngine", "UILineInfo");
        }
        inline app::UILineInfo* create() {
            return il2cpp::create_object<app::UILineInfo>(get_class());
        }
        inline app::UILineInfo__Boxed* box(app::UILineInfo value) {
            return il2cpp::box_value<app::UILineInfo__Boxed>(get_class(), value);
        }
        inline app::UILineInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UILineInfo__Array>(get_class(), size);
        }
        inline app::UILineInfo__Array* create_array(const std::vector<app::UILineInfo__Boxed>& items) {
            return il2cpp::array_new<app::UILineInfo__Array>(get_class(), items);
        }
    } // namespace UILineInfo
} // namespace app::classes::types
