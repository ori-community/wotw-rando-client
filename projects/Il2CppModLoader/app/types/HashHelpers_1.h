#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HashHelpers_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HashHelpers_1__Class** type_info;
        inline app::HashHelpers_1__Class* get_class() {
            return il2cpp::get_class<app::HashHelpers_1__Class>(type_info, "System.Collections", "HashHelpers");
        }
        inline app::HashHelpers_1* create() {
            return il2cpp::create_object<app::HashHelpers_1>(get_class());
        }
    } // namespace HashHelpers_1
} // namespace app::classes::types
