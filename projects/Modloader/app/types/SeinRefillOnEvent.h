#pragma once
#include <Modloader/app/structs/SeinRefillOnEvent.h>
#include <Modloader/app/structs/SeinRefillOnEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRefillOnEvent {
        inline app::SeinRefillOnEvent__Class** type_info() {
            static app::SeinRefillOnEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinRefillOnEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinRefillOnEvent__Class* get_class() {
            return il2cpp::get_class<app::SeinRefillOnEvent__Class>(type_info(), "", "SeinRefillOnEvent");
        }
        inline app::SeinRefillOnEvent* create() {
            return il2cpp::create_object<app::SeinRefillOnEvent>(get_class());
        }
    } // namespace SeinRefillOnEvent
} // namespace app::classes::types
