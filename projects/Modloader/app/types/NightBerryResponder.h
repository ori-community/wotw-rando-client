#pragma once
#include <Modloader/app/structs/NightBerryResponder.h>
#include <Modloader/app/structs/NightBerryResponder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightBerryResponder {
        inline app::NightBerryResponder__Class** type_info() {
            static app::NightBerryResponder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightBerryResponder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightBerryResponder__Class* get_class() {
            return il2cpp::get_class<app::NightBerryResponder__Class>(type_info(), "", "NightBerryResponder");
        }
        inline app::NightBerryResponder* create() {
            return il2cpp::create_object<app::NightBerryResponder>(get_class());
        }
    } // namespace NightBerryResponder
} // namespace app::classes::types
