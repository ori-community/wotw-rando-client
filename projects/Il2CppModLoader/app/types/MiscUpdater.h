#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MiscUpdater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MiscUpdater__Class** type_info;
        inline app::MiscUpdater__Class* get_class() {
            return il2cpp::get_class<app::MiscUpdater__Class>(type_info, "", "MiscUpdater");
        }
        inline app::MiscUpdater* create() {
            return il2cpp::create_object<app::MiscUpdater>(get_class());
        }
    } // namespace MiscUpdater
} // namespace app::classes::types
