#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UICharInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UICharInfo__Class** type_info;
        inline app::UICharInfo__Class* get_class() {
            return il2cpp::get_class<app::UICharInfo__Class>(type_info, "UnityEngine", "UICharInfo");
        }
        inline app::UICharInfo* create() {
            return il2cpp::create_object<app::UICharInfo>(get_class());
        }
        inline app::UICharInfo__Boxed* box(app::UICharInfo value) {
            return il2cpp::box_value<app::UICharInfo__Boxed>(get_class(), value);
        }
        inline app::UICharInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::UICharInfo__Array>(get_class(), size);
        }
    } // namespace UICharInfo
} // namespace app::classes::types
