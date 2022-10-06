#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Capture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Capture__Class** type_info;
        inline app::Capture__Class* get_class() {
            return il2cpp::get_class<app::Capture__Class>(type_info, "System.Text.RegularExpressions", "Capture");
        }
        inline app::Capture* create() {
            return il2cpp::create_object<app::Capture>(get_class());
        }
        inline app::Capture__Array* create_array(int size) {
            return il2cpp::array_new<app::Capture__Array>(get_class(), size);
        }
        inline app::Capture__Array* create_array(const std::vector<app::Capture*>& items) {
            return il2cpp::array_new<app::Capture__Array>(get_class(), items);
        }
    } // namespace Capture
} // namespace app::classes::types
