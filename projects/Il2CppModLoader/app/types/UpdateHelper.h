#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateHelper__Class** type_info;
        inline app::UpdateHelper__Class* get_class() {
            return il2cpp::get_class<app::UpdateHelper__Class>(type_info, "moonCore.moonDriver", "UpdateHelper");
        }
        inline app::UpdateHelper* create() {
            return il2cpp::create_object<app::UpdateHelper>(get_class());
        }
    } // namespace UpdateHelper
} // namespace app::classes::types
