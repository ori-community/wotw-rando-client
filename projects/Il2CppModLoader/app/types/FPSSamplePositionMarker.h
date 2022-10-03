#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSSamplePositionMarker {
        namespace {
            app::FPSSamplePositionMarker__Class* type_info_ref = nullptr;
        }
        app::FPSSamplePositionMarker__Class** type_info = &type_info_ref;
        inline app::FPSSamplePositionMarker__Class* get_class() {
            return il2cpp::get_class<app::FPSSamplePositionMarker__Class>(type_info, "", "FPSSamplePositionMarker");
        }
        inline app::FPSSamplePositionMarker* create() {
            return il2cpp::create_object<app::FPSSamplePositionMarker>(get_class());
        }
    } // namespace FPSSamplePositionMarker
} // namespace app::classes::types
