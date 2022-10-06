#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Atlas {
        namespace {
            app::Atlas__Class* type_info_ref = nullptr;
        }
        app::Atlas__Class** type_info = &type_info_ref;
        inline app::Atlas__Class* get_class() {
            return il2cpp::get_class<app::Atlas__Class>(type_info, "", "Atlas");
        }
        inline app::Atlas* create() {
            return il2cpp::create_object<app::Atlas>(get_class());
        }
        inline app::Atlas__Array* create_array(int size) {
            return il2cpp::array_new<app::Atlas__Array>(get_class(), size);
        }
        inline app::Atlas__Array* create_array(const std::vector<app::Atlas*>& items) {
            return il2cpp::array_new<app::Atlas__Array>(get_class(), items);
        }
    } // namespace Atlas
} // namespace app::classes::types
