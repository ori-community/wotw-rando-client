#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeashMarkEffect {
        namespace {
            inline app::LeashMarkEffect__Class* type_info_ref = nullptr;
        }
        inline app::LeashMarkEffect__Class** type_info = &type_info_ref;
        inline app::LeashMarkEffect__Class* get_class() {
            return il2cpp::get_class<app::LeashMarkEffect__Class>(type_info, "", "LeashMarkEffect");
        }
        inline app::LeashMarkEffect* create() {
            return il2cpp::create_object<app::LeashMarkEffect>(get_class());
        }
        inline app::LeashMarkEffect__Array* create_array(int size) {
            return il2cpp::array_new<app::LeashMarkEffect__Array>(get_class(), size);
        }
        inline app::LeashMarkEffect__Array* create_array(const std::vector<app::LeashMarkEffect*>& items) {
            return il2cpp::array_new<app::LeashMarkEffect__Array>(get_class(), items);
        }
    } // namespace LeashMarkEffect
} // namespace app::classes::types
