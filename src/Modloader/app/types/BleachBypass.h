#pragma once
#include <Modloader/app/structs/BleachBypass.h>
#include <Modloader/app/structs/BleachBypass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BleachBypass {
        inline app::BleachBypass__Class** type_info() {
            static app::BleachBypass__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BleachBypass__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BleachBypass__Class* get_class() {
            return il2cpp::get_class<app::BleachBypass__Class>(type_info(), "Colorful", "BleachBypass");
        }
        inline app::BleachBypass* create() {
            return il2cpp::create_object<app::BleachBypass>(get_class());
        }
    } // namespace BleachBypass
} // namespace app::classes::types
