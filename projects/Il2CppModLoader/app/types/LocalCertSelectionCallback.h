#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalCertSelectionCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalCertSelectionCallback__Class** type_info;
        inline app::LocalCertSelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::LocalCertSelectionCallback__Class>(type_info, "System.Net.Security", "LocalCertSelectionCallback");
        }
        inline app::LocalCertSelectionCallback* create() {
            return il2cpp::create_object<app::LocalCertSelectionCallback>(get_class());
        }
    } // namespace LocalCertSelectionCallback
} // namespace app::classes::types
