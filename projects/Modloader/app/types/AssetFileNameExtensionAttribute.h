#pragma once
#include <Modloader/app/structs/AssetFileNameExtensionAttribute.h>
#include <Modloader/app/structs/AssetFileNameExtensionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetFileNameExtensionAttribute {
        inline app::AssetFileNameExtensionAttribute__Class** type_info() {
            static app::AssetFileNameExtensionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetFileNameExtensionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetFileNameExtensionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssetFileNameExtensionAttribute__Class>(type_info(), "UnityEngine", "AssetFileNameExtensionAttribute");
        }
        inline app::AssetFileNameExtensionAttribute* create() {
            return il2cpp::create_object<app::AssetFileNameExtensionAttribute>(get_class());
        }
    } // namespace AssetFileNameExtensionAttribute
} // namespace app::classes::types
