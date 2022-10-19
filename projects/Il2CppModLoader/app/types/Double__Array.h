#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Double__Array {
        inline app::Double__Array__Class** type_info = (app::Double__Array__Class**)(modloader::win::memory::resolve_rva(0x04732178));
        inline app::Double__Array__Class* get_class() {
            return il2cpp::get_class<app::Double__Array__Class>(type_info, "System", "Double[]");
        }
        inline app::Double__Array* create() {
            return il2cpp::create_object<app::Double__Array>(get_class());
        }
        inline app::Double__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Double__Array__Array>(get_class(), size);
        }
        inline app::Double__Array__Array* create_array(const std::vector<app::Double__Array*>& items) {
            return il2cpp::array_new<app::Double__Array__Array>(get_class(), items);
        }
    } // namespace Double__Array
} // namespace app::classes::types
