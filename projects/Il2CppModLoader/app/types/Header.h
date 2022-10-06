#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Header {
        namespace {
            app::Header__Class* type_info_ref = nullptr;
        }
        app::Header__Class** type_info = &type_info_ref;
        inline app::Header__Class* get_class() {
            return il2cpp::get_class<app::Header__Class>(type_info, "System.Runtime.Remoting.Messaging", "Header");
        }
        inline app::Header* create() {
            return il2cpp::create_object<app::Header>(get_class());
        }
        inline app::Header__Array* create_array(int size) {
            return il2cpp::array_new<app::Header__Array>(get_class(), size);
        }
        inline app::Header__Array* create_array(const std::vector<app::Header*>& items) {
            return il2cpp::array_new<app::Header__Array>(get_class(), items);
        }
    } // namespace Header
} // namespace app::classes::types
