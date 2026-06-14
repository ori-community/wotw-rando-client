#pragma once
#include <Modloader/app/structs/CC_Led.h>
#include <Modloader/app/structs/CC_Led__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Led {
        inline app::CC_Led__Class** type_info() {
            static app::CC_Led__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Led__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Led__Class* get_class() {
            return il2cpp::get_class<app::CC_Led__Class>(type_info(), "", "CC_Led");
        }
        inline app::CC_Led* create() {
            return il2cpp::create_object<app::CC_Led>(get_class());
        }
    } // namespace CC_Led
} // namespace app::classes::types
