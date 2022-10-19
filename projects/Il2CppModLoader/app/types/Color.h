#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Color {
        inline app::Color__Class** type_info = (app::Color__Class**)(modloader::win::memory::resolve_rva(0x0473C110));
        inline app::Color__Class* get_class() {
            return il2cpp::get_class<app::Color__Class>(type_info, "UnityEngine", "Color");
        }
        inline app::Color* create() {
            return il2cpp::create_object<app::Color>(get_class());
        }
        inline app::Color__Boxed* box(app::Color value) {
            return il2cpp::box_value<app::Color__Boxed>(get_class(), value);
        }
        inline app::Color__Array* create_array(int size) {
            return il2cpp::array_new<app::Color__Array>(get_class(), size);
        }
        inline app::Color__Array* create_array(const std::vector<app::Color>& items) {
            return il2cpp::array_new<app::Color__Array>(get_class(), items);
        }
    } // namespace Color
} // namespace app::classes::types
