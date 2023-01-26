#pragma once
#include <Modloader/app/structs/ContrastGain.h>
#include <Modloader/app/structs/ContrastGain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContrastGain {
        inline app::ContrastGain__Class** type_info() {
            static app::ContrastGain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContrastGain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContrastGain__Class* get_class() {
            return il2cpp::get_class<app::ContrastGain__Class>(type_info(), "Colorful", "ContrastGain");
        }
        inline app::ContrastGain* create() {
            return il2cpp::create_object<app::ContrastGain>(get_class());
        }
    } // namespace ContrastGain
} // namespace app::classes::types
