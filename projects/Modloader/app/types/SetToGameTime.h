#pragma once
#include <Modloader/app/structs/SetToGameTime.h>
#include <Modloader/app/structs/SetToGameTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetToGameTime {
        inline app::SetToGameTime__Class** type_info() {
            static app::SetToGameTime__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetToGameTime__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetToGameTime__Class* get_class() {
            return il2cpp::get_class<app::SetToGameTime__Class>(type_info(), "", "SetToGameTime");
        }
        inline app::SetToGameTime* create() {
            return il2cpp::create_object<app::SetToGameTime>(get_class());
        }
    } // namespace SetToGameTime
} // namespace app::classes::types
