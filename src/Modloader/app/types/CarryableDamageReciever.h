#pragma once
#include <Modloader/app/structs/CarryableDamageReciever.h>
#include <Modloader/app/structs/CarryableDamageReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CarryableDamageReciever {
        inline app::CarryableDamageReciever__Class** type_info() {
            static app::CarryableDamageReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CarryableDamageReciever__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CarryableDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::CarryableDamageReciever__Class>(type_info(), "", "CarryableDamageReciever");
        }
        inline app::CarryableDamageReciever* create() {
            return il2cpp::create_object<app::CarryableDamageReciever>(get_class());
        }
    } // namespace CarryableDamageReciever
} // namespace app::classes::types
