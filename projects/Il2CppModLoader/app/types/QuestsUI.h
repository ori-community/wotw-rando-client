#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestsUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QuestsUI__Class** type_info;
        inline app::QuestsUI__Class* get_class() {
            return il2cpp::get_class<app::QuestsUI__Class>(type_info, "", "QuestsUI");
        }
        inline app::QuestsUI* create() {
            return il2cpp::create_object<app::QuestsUI>(get_class());
        }
    } // namespace QuestsUI
} // namespace app::classes::types
