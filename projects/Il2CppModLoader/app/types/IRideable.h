#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRideable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRideable__Class** type_info;
        inline app::IRideable__Class* get_class() {
            return il2cpp::get_class<app::IRideable__Class>(type_info, "", "IRideable");
        }
        inline app::IRideable* create() {
            return il2cpp::create_object<app::IRideable>(get_class());
        }
    } // namespace IRideable
} // namespace app::classes::types
