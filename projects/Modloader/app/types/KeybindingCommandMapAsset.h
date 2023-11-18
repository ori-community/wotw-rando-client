#pragma once
#include <Modloader/app/structs/KeybindingCommandMapAsset.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset {
        inline app::KeybindingCommandMapAsset__Class** type_info() {
            static app::KeybindingCommandMapAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeybindingCommandMapAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeybindingCommandMapAsset__Class* get_class() {
            return il2cpp::get_class<app::KeybindingCommandMapAsset__Class>(type_info(), "", "KeybindingCommandMapAsset");
        }
        inline app::KeybindingCommandMapAsset* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset>(get_class());
        }
    } // namespace KeybindingCommandMapAsset
} // namespace app::classes::types
