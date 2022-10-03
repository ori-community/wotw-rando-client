#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneDVRManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneDVRManager__Class** type_info;
        inline app::XboxOneDVRManager__Class* get_class() {
            return il2cpp::get_class<app::XboxOneDVRManager__Class>(type_info, "", "XboxOneDVRManager");
        }
        inline app::XboxOneDVRManager* create() {
            return il2cpp::create_object<app::XboxOneDVRManager>(get_class());
        }
    } // namespace XboxOneDVRManager
} // namespace app::classes::types
