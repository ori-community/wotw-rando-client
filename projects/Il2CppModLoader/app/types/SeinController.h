#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinController__Class** type_info;
        inline app::SeinController__Class* get_class() {
            return il2cpp::get_class<app::SeinController__Class>(type_info, "", "SeinController");
        }
        inline app::SeinController* create() {
            return il2cpp::create_object<app::SeinController>(get_class());
        }
    } // namespace SeinController
} // namespace app::classes::types
