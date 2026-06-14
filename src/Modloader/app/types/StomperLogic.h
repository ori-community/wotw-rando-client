#pragma once
#include <Modloader/app/structs/StomperLogic.h>
#include <Modloader/app/structs/StomperLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StomperLogic {
        inline app::StomperLogic__Class** type_info() {
            static app::StomperLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StomperLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StomperLogic__Class* get_class() {
            return il2cpp::get_class<app::StomperLogic__Class>(type_info(), "", "StomperLogic");
        }
        inline app::StomperLogic* create() {
            return il2cpp::create_object<app::StomperLogic>(get_class());
        }
    } // namespace StomperLogic
} // namespace app::classes::types
