#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetFileNameExtensionAttribute {
        namespace {
            app::AssetFileNameExtensionAttribute__Class* type_info_ref = nullptr;
        }
        app::AssetFileNameExtensionAttribute__Class** type_info = &type_info_ref;
        inline app::AssetFileNameExtensionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssetFileNameExtensionAttribute__Class>(type_info, "UnityEngine", "AssetFileNameExtensionAttribute");
        }
        inline app::AssetFileNameExtensionAttribute* create() {
            return il2cpp::create_object<app::AssetFileNameExtensionAttribute>(get_class());
        }
    } // namespace AssetFileNameExtensionAttribute
} // namespace app::classes::types
