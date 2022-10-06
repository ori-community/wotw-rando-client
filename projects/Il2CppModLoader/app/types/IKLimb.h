#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKLimb {
        namespace {
            app::IKLimb__Class* type_info_ref = nullptr;
        }
        app::IKLimb__Class** type_info = &type_info_ref;
        inline app::IKLimb__Class* get_class() {
            return il2cpp::get_class<app::IKLimb__Class>(type_info, "Moon", "IKLimb");
        }
        inline app::IKLimb* create() {
            return il2cpp::create_object<app::IKLimb>(get_class());
        }
        inline app::IKLimb__Array* create_array(int size) {
            return il2cpp::array_new<app::IKLimb__Array>(get_class(), size);
        }
        inline app::IKLimb__Array* create_array(const std::vector<app::IKLimb*>& items) {
            return il2cpp::array_new<app::IKLimb__Array>(get_class(), items);
        }
    } // namespace IKLimb
} // namespace app::classes::types
