#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoRotate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AutoRotate__Class** type_info;
        inline app::AutoRotate__Class* get_class() {
            return il2cpp::get_class<app::AutoRotate__Class>(type_info, "", "AutoRotate");
        }
        inline app::AutoRotate* create() {
            return il2cpp::create_object<app::AutoRotate>(get_class());
        }
    } // namespace AutoRotate
} // namespace app::classes::types
