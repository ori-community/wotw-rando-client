#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionTurbulence {
        namespace {
            app::PositionTurbulence__Class* type_info_ref = nullptr;
        }
        app::PositionTurbulence__Class** type_info = &type_info_ref;
        inline app::PositionTurbulence__Class* get_class() {
            return il2cpp::get_class<app::PositionTurbulence__Class>(type_info, "", "PositionTurbulence");
        }
        inline app::PositionTurbulence* create() {
            return il2cpp::create_object<app::PositionTurbulence>(get_class());
        }
    } // namespace PositionTurbulence
} // namespace app::classes::types
