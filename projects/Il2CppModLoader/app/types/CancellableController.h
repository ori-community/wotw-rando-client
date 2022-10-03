#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancellableController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancellableController__Class** type_info;
        inline app::CancellableController__Class* get_class() {
            return il2cpp::get_class<app::CancellableController__Class>(type_info, "", "CancellableController");
        }
        inline app::CancellableController* create() {
            return il2cpp::create_object<app::CancellableController>(get_class());
        }
    } // namespace CancellableController
} // namespace app::classes::types
