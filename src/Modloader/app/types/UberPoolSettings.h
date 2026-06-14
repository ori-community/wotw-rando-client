#pragma once
#include <Modloader/app/structs/UberPoolSettings.h>
#include <Modloader/app/structs/UberPoolSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolSettings {
        inline app::UberPoolSettings__Class** type_info() {
            static app::UberPoolSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolSettings__Class* get_class() {
            return il2cpp::get_class<app::UberPoolSettings__Class>(type_info(), "", "UberPoolSettings");
        }
        inline app::UberPoolSettings* create() {
            return il2cpp::create_object<app::UberPoolSettings>(get_class());
        }
    } // namespace UberPoolSettings
} // namespace app::classes::types
