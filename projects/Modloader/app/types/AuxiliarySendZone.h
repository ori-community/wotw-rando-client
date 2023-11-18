#pragma once
#include <Modloader/app/structs/AuxiliarySendZone.h>
#include <Modloader/app/structs/AuxiliarySendZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuxiliarySendZone {
        inline app::AuxiliarySendZone__Class** type_info() {
            static app::AuxiliarySendZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuxiliarySendZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuxiliarySendZone__Class* get_class() {
            return il2cpp::get_class<app::AuxiliarySendZone__Class>(type_info(), "", "AuxiliarySendZone");
        }
        inline app::AuxiliarySendZone* create() {
            return il2cpp::create_object<app::AuxiliarySendZone>(get_class());
        }
    } // namespace AuxiliarySendZone
} // namespace app::classes::types
