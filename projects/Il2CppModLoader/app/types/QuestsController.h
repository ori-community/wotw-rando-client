#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestsController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QuestsController__Class** type_info;
        inline app::QuestsController__Class* get_class() {
            return il2cpp::get_class<app::QuestsController__Class>(type_info, "", "QuestsController");
        }
        inline app::QuestsController* create() {
            return il2cpp::create_object<app::QuestsController>(get_class());
        }
    } // namespace QuestsController
} // namespace app::classes::types
