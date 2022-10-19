#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageBox {
        namespace {
            inline app::MessageBox__Class* type_info_ref = nullptr;
        }
        inline app::MessageBox__Class** type_info = &type_info_ref;
        inline app::MessageBox__Class* get_class() {
            return il2cpp::get_class<app::MessageBox__Class>(type_info, "", "MessageBox");
        }
        inline app::MessageBox* create() {
            return il2cpp::create_object<app::MessageBox>(get_class());
        }
        inline app::MessageBox__Array* create_array(int size) {
            return il2cpp::array_new<app::MessageBox__Array>(get_class(), size);
        }
        inline app::MessageBox__Array* create_array(const std::vector<app::MessageBox*>& items) {
            return il2cpp::array_new<app::MessageBox__Array>(get_class(), items);
        }
    } // namespace MessageBox
} // namespace app::classes::types
