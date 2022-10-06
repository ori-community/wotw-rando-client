#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TermInfoStrings__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TermInfoStrings__Enum__Class** type_info;
        inline app::TermInfoStrings__Enum__Class* get_class() {
            return il2cpp::get_class<app::TermInfoStrings__Enum__Class>(type_info, "System", "TermInfoStrings");
        }
        inline app::TermInfoStrings__Enum* create() {
            return il2cpp::create_object<app::TermInfoStrings__Enum>(get_class());
        }
        inline app::TermInfoStrings__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::TermInfoStrings__Enum__Array>(get_class(), size);
        }
        inline app::TermInfoStrings__Enum__Array* create_array(const std::vector<app::TermInfoStrings__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::TermInfoStrings__Enum__Array>(get_class(), items);
        }
    } // namespace TermInfoStrings__Enum
} // namespace app::classes::types
