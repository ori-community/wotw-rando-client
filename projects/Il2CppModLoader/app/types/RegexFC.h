#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexFC {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexFC__Class** type_info;
        inline app::RegexFC__Class* get_class() {
            return il2cpp::get_class<app::RegexFC__Class>(type_info, "System.Text.RegularExpressions", "RegexFC");
        }
        inline app::RegexFC* create() {
            return il2cpp::create_object<app::RegexFC>(get_class());
        }
        inline app::RegexFC__Array* create_array(int size) {
            return il2cpp::array_new<app::RegexFC__Array>(get_class(), size);
        }
        inline app::RegexFC__Array* create_array(const std::vector<app::RegexFC*>& items) {
            return il2cpp::array_new<app::RegexFC__Array>(get_class(), items);
        }
    } // namespace RegexFC
} // namespace app::classes::types
