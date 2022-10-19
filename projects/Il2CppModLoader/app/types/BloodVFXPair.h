#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BloodVFXPair {
        namespace {
            inline app::BloodVFXPair__Class* type_info_ref = nullptr;
        }
        inline app::BloodVFXPair__Class** type_info = &type_info_ref;
        inline app::BloodVFXPair__Class* get_class() {
            return il2cpp::get_class<app::BloodVFXPair__Class>(type_info, "", "BloodVFXPair");
        }
        inline app::BloodVFXPair* create() {
            return il2cpp::create_object<app::BloodVFXPair>(get_class());
        }
        inline app::BloodVFXPair__Array* create_array(int size) {
            return il2cpp::array_new<app::BloodVFXPair__Array>(get_class(), size);
        }
        inline app::BloodVFXPair__Array* create_array(const std::vector<app::BloodVFXPair*>& items) {
            return il2cpp::array_new<app::BloodVFXPair__Array>(get_class(), items);
        }
    } // namespace BloodVFXPair
} // namespace app::classes::types
