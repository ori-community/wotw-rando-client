#pragma once
#include <Modloader/app/structs/WindVent.h>
#include <Modloader/app/structs/WindVent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindVent {
        inline app::WindVent__Class** type_info() {
            static app::WindVent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindVent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindVent__Class* get_class() {
            return il2cpp::get_class<app::WindVent__Class>(type_info(), "", "WindVent");
        }
        inline app::WindVent* create() {
            return il2cpp::create_object<app::WindVent>(get_class());
        }
    } // namespace WindVent
} // namespace app::classes::types
