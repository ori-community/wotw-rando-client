#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Boolean {
        inline app::Boolean__Class** type_info = (app::Boolean__Class**)(modloader::win::memory::resolve_rva(0x04781D98));
        inline app::Boolean__Class* get_class() {
            return il2cpp::get_class<app::Boolean__Class>(type_info, "System", "Boolean");
        }
        inline app::Boolean* create() {
            return il2cpp::create_object<app::Boolean>(get_class());
        }
        inline app::Boolean__Boxed* box(bool value) {
            return il2cpp::box_value<app::Boolean__Boxed>(get_class(), value);
        }
        inline app::Boolean__Array* create_array(int size) {
            return il2cpp::array_new<app::Boolean__Array>(get_class(), size);
        }
        inline app::Boolean__Array* create_array(const std::vector<bool>& items) {
            return il2cpp::array_new<app::Boolean__Array>(get_class(), items);
        }
    } // namespace Boolean
} // namespace app::classes::types
