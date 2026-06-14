#pragma once
#include <Modloader/app/structs/FreeCameraMove.h>
#include <Modloader/app/structs/FreeCameraMove__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FreeCameraMove {
        inline app::FreeCameraMove__Class** type_info() {
            static app::FreeCameraMove__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FreeCameraMove__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FreeCameraMove__Class* get_class() {
            return il2cpp::get_class<app::FreeCameraMove__Class>(type_info(), "BeautifyEffect", "FreeCameraMove");
        }
        inline app::FreeCameraMove* create() {
            return il2cpp::create_object<app::FreeCameraMove>(get_class());
        }
    } // namespace FreeCameraMove
} // namespace app::classes::types
