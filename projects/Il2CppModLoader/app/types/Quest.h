#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Quest {
        namespace {
            inline app::Quest__Class* type_info_ref = nullptr;
        }
        inline app::Quest__Class** type_info = &type_info_ref;
        inline app::Quest__Class* get_class() {
            return il2cpp::get_class<app::Quest__Class>(type_info, "", "Quest");
        }
        inline app::Quest* create() {
            return il2cpp::create_object<app::Quest>(get_class());
        }
        inline app::Quest__Array* create_array(int size) {
            return il2cpp::array_new<app::Quest__Array>(get_class(), size);
        }
        inline app::Quest__Array* create_array(const std::vector<app::Quest*>& items) {
            return il2cpp::array_new<app::Quest__Array>(get_class(), items);
        }
    } // namespace Quest
} // namespace app::classes::types
