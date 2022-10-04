#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuExternalItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDebugMenuExternalItem__Class** type_info;
        inline app::IDebugMenuExternalItem__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuExternalItem__Class>(type_info, "", "IDebugMenuExternalItem");
        }
        inline app::IDebugMenuExternalItem* create() {
            return il2cpp::create_object<app::IDebugMenuExternalItem>(get_class());
        }
    } // namespace IDebugMenuExternalItem
} // namespace app::classes::types
