#pragma once
#include <Modloader/app/structs/CC_Frost.h>
#include <Modloader/app/structs/CC_Frost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Frost {
        inline app::CC_Frost__Class** type_info() {
            static app::CC_Frost__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Frost__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Frost__Class* get_class() {
            return il2cpp::get_class<app::CC_Frost__Class>(type_info(), "", "CC_Frost");
        }
        inline app::CC_Frost* create() {
            return il2cpp::create_object<app::CC_Frost>(get_class());
        }
    } // namespace CC_Frost
} // namespace app::classes::types
