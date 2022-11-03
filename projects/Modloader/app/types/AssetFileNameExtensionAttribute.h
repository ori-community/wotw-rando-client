#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssetFileNameExtensionAttribute {
        namespace {
            inline app::AssetFileNameExtensionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssetFileNameExtensionAttribute__Class** type_info = &type_info_ref;
        inline app::AssetFileNameExtensionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssetFileNameExtensionAttribute__Class>(type_info, "UnityEngine", "AssetFileNameExtensionAttribute");
        }
        inline app::AssetFileNameExtensionAttribute* create() {
            return il2cpp::create_object<app::AssetFileNameExtensionAttribute>(get_class());
        }
    } // namespace AssetFileNameExtensionAttribute
} // namespace app::classes::types
