#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Double {
        inline app::Double__Class** type_info = (app::Double__Class**)(modloader::win::memory::resolve_rva(0x04726F28));
        inline app::Double__Class* get_class() {
            return il2cpp::get_class<app::Double__Class>(type_info, "System", "Double");
        }
        inline app::Double* create() {
            return il2cpp::create_object<app::Double>(get_class());
        }
        inline app::Double__Boxed* box(double value) {
            return il2cpp::box_value<app::Double__Boxed>(get_class(), value);
        }
        inline app::Double__Array* create_array(int size) {
            return il2cpp::array_new<app::Double__Array>(get_class(), size);
        }
        inline app::Double__Array* create_array(const std::vector<double>& items) {
            return il2cpp::array_new<app::Double__Array>(get_class(), items);
        }
    } // namespace Double
} // namespace app::classes::types
