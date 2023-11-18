#pragma once
#include <Modloader/app/structs/CC_BleachBypass.h>
#include <Modloader/app/structs/CC_BleachBypass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_BleachBypass {
        inline app::CC_BleachBypass__Class** type_info() {
            static app::CC_BleachBypass__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_BleachBypass__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::CC_BleachBypass__Class>(type_info(), "", "CC_BleachBypass");
        }
        inline app::CC_BleachBypass* create() {
            return il2cpp::create_object<app::CC_BleachBypass>(get_class());
        }
    } // namespace CC_BleachBypass
} // namespace app::classes::types
