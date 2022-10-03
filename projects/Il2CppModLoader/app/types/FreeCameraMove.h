#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FreeCameraMove {
        namespace {
            app::FreeCameraMove__Class* type_info_ref = nullptr;
        }
        app::FreeCameraMove__Class** type_info = &type_info_ref;
        inline app::FreeCameraMove__Class* get_class() {
            return il2cpp::get_class<app::FreeCameraMove__Class>(type_info, "BeautifyEffect", "FreeCameraMove");
        }
        inline app::FreeCameraMove* create() {
            return il2cpp::create_object<app::FreeCameraMove>(get_class());
        }
    } // namespace FreeCameraMove
} // namespace app::classes::types
