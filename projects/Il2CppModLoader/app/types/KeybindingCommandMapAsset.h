#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset {
        namespace {
            app::KeybindingCommandMapAsset__Class* type_info_ref = nullptr;
        }
        app::KeybindingCommandMapAsset__Class** type_info = &type_info_ref;
        inline app::KeybindingCommandMapAsset__Class* get_class() {
            return il2cpp::get_class<app::KeybindingCommandMapAsset__Class>(type_info, "", "KeybindingCommandMapAsset");
        }
        inline app::KeybindingCommandMapAsset* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset>(get_class());
        }
    } // namespace KeybindingCommandMapAsset
} // namespace app::classes::types
