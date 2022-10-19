#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RectTransform {
        inline app::RectTransform__Class** type_info = (app::RectTransform__Class**)(modloader::win::memory::resolve_rva(0x047725C8));
        inline app::RectTransform__Class* get_class() {
            return il2cpp::get_class<app::RectTransform__Class>(type_info, "UnityEngine", "RectTransform");
        }
        inline app::RectTransform* create() {
            return il2cpp::create_object<app::RectTransform>(get_class());
        }
        inline app::RectTransform__Array* create_array(int size) {
            return il2cpp::array_new<app::RectTransform__Array>(get_class(), size);
        }
        inline app::RectTransform__Array* create_array(const std::vector<app::RectTransform*>& items) {
            return il2cpp::array_new<app::RectTransform__Array>(get_class(), items);
        }
    } // namespace RectTransform
} // namespace app::classes::types
