#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanvasGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CanvasGroup__Class** type_info;
        inline app::CanvasGroup__Class* get_class() {
            return il2cpp::get_class<app::CanvasGroup__Class>(type_info, "UnityEngine", "CanvasGroup");
        }
        inline app::CanvasGroup* create() {
            return il2cpp::create_object<app::CanvasGroup>(get_class());
        }
        inline app::CanvasGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::CanvasGroup__Array>(get_class(), size);
        }
        inline app::CanvasGroup__Array* create_array(const std::vector<app::CanvasGroup*>& items) {
            return il2cpp::array_new<app::CanvasGroup__Array>(get_class(), items);
        }
    } // namespace CanvasGroup
} // namespace app::classes::types
