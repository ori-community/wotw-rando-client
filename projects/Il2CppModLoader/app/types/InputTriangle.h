#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputTriangle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputTriangle__Class** type_info;
        inline app::InputTriangle__Class* get_class() {
            return il2cpp::get_class<app::InputTriangle__Class>(type_info, "TriangleNet.IO", "InputTriangle");
        }
        inline app::InputTriangle* create() {
            return il2cpp::create_object<app::InputTriangle>(get_class());
        }
        inline app::InputTriangle__Array* create_array(int size) {
            return il2cpp::array_new<app::InputTriangle__Array>(get_class(), size);
        }
        inline app::InputTriangle__Array* create_array(const std::vector<app::InputTriangle*>& items) {
            return il2cpp::array_new<app::InputTriangle__Array>(get_class(), items);
        }
    } // namespace InputTriangle
} // namespace app::classes::types
