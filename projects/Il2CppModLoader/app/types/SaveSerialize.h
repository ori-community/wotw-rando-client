#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSerialize {
        namespace {
            inline app::SaveSerialize__Class* type_info_ref = nullptr;
        }
        inline app::SaveSerialize__Class** type_info = &type_info_ref;
        inline app::SaveSerialize__Class* get_class() {
            return il2cpp::get_class<app::SaveSerialize__Class>(type_info, "", "SaveSerialize");
        }
        inline app::SaveSerialize* create() {
            return il2cpp::create_object<app::SaveSerialize>(get_class());
        }
        inline app::SaveSerialize__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSerialize__Array>(get_class(), size);
        }
        inline app::SaveSerialize__Array* create_array(const std::vector<app::SaveSerialize*>& items) {
            return il2cpp::array_new<app::SaveSerialize__Array>(get_class(), items);
        }
    } // namespace SaveSerialize
} // namespace app::classes::types
