#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuState {
        namespace {
            inline app::KuState__Class* type_info_ref = nullptr;
        }
        inline app::KuState__Class** type_info = &type_info_ref;
        inline app::KuState__Class* get_class() {
            return il2cpp::get_class<app::KuState__Class>(type_info, "", "KuState");
        }
        inline app::KuState* create() {
            return il2cpp::create_object<app::KuState>(get_class());
        }
        inline app::KuState__Array* create_array(int size) {
            return il2cpp::array_new<app::KuState__Array>(get_class(), size);
        }
        inline app::KuState__Array* create_array(const std::vector<app::KuState*>& items) {
            return il2cpp::array_new<app::KuState__Array>(get_class(), items);
        }
    } // namespace KuState
} // namespace app::classes::types
