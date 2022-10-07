#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexOptions__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexOptions__Enum__Class** type_info;
        inline app::RegexOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::RegexOptions__Enum__Class>(type_info, "System.Text.RegularExpressions", "RegexOptions");
        }
        inline app::RegexOptions__Enum* create() {
            return il2cpp::create_object<app::RegexOptions__Enum>(get_class());
        }
        inline app::RegexOptions__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::RegexOptions__Enum__Array>(get_class(), size);
        }
        inline app::RegexOptions__Enum__Array* create_array(const std::vector<app::RegexOptions__Enum*>& items) {
            return il2cpp::array_new<app::RegexOptions__Enum__Array>(get_class(), items);
        }
    } // namespace RegexOptions__Enum
} // namespace app::classes::types
