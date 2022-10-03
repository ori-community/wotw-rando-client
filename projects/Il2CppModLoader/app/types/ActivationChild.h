#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivationChild {
        namespace {
            app::ActivationChild__Class* type_info_ref = nullptr;
        }
        app::ActivationChild__Class** type_info = &type_info_ref;
        inline app::ActivationChild__Class* get_class() {
            return il2cpp::get_class<app::ActivationChild__Class>(type_info, "", "ActivationChild");
        }
        inline app::ActivationChild* create() {
            return il2cpp::create_object<app::ActivationChild>(get_class());
        }
        inline app::ActivationChild__Array* create_array(int size) {
            return il2cpp::array_new<app::ActivationChild__Array>(get_class(), size);
        }
    } // namespace ActivationChild
} // namespace app::classes::types
