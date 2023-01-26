#pragma once
#include <Modloader/app/structs/FPSSamplePositionMarker.h>
#include <Modloader/app/structs/FPSSamplePositionMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSSamplePositionMarker {
        inline app::FPSSamplePositionMarker__Class** type_info() {
            static app::FPSSamplePositionMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSSamplePositionMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSSamplePositionMarker__Class* get_class() {
            return il2cpp::get_class<app::FPSSamplePositionMarker__Class>(type_info(), "", "FPSSamplePositionMarker");
        }
        inline app::FPSSamplePositionMarker* create() {
            return il2cpp::create_object<app::FPSSamplePositionMarker>(get_class());
        }
    } // namespace FPSSamplePositionMarker
} // namespace app::classes::types
