#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivationChild {
        namespace {
            inline app::ActivationChild__Class* type_info_ref = nullptr;
        }
        inline app::ActivationChild__Class** type_info = &type_info_ref;
        inline app::ActivationChild__Class* get_class() {
            return il2cpp::get_class<app::ActivationChild__Class>(type_info, "", "ActivationChild");
        }
        inline app::ActivationChild* create() {
            return il2cpp::create_object<app::ActivationChild>(get_class());
        }
        inline app::ActivationChild__Array* create_array(int size) {
            return il2cpp::array_new<app::ActivationChild__Array>(get_class(), size);
        }
        inline app::ActivationChild__Array* create_array(const std::vector<app::ActivationChild*>& items) {
            return il2cpp::array_new<app::ActivationChild__Array>(get_class(), items);
        }
    } // namespace ActivationChild
} // namespace app::classes::types
