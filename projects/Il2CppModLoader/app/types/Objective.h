#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Objective {
        namespace {
            inline app::Objective__Class* type_info_ref = nullptr;
        }
        inline app::Objective__Class** type_info = &type_info_ref;
        inline app::Objective__Class* get_class() {
            return il2cpp::get_class<app::Objective__Class>(type_info, "", "Objective");
        }
        inline app::Objective* create() {
            return il2cpp::create_object<app::Objective>(get_class());
        }
        inline app::Objective__Array* create_array(int size) {
            return il2cpp::array_new<app::Objective__Array>(get_class(), size);
        }
        inline app::Objective__Array* create_array(const std::vector<app::Objective*>& items) {
            return il2cpp::array_new<app::Objective__Array>(get_class(), items);
        }
    } // namespace Objective
} // namespace app::classes::types
