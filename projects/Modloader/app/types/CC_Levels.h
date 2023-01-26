#pragma once
#include <Modloader/app/structs/CC_Levels.h>
#include <Modloader/app/structs/CC_Levels__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Levels {
        inline app::CC_Levels__Class** type_info() {
            static app::CC_Levels__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Levels__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Levels__Class* get_class() {
            return il2cpp::get_class<app::CC_Levels__Class>(type_info(), "", "CC_Levels");
        }
        inline app::CC_Levels* create() {
            return il2cpp::create_object<app::CC_Levels>(get_class());
        }
    } // namespace CC_Levels
} // namespace app::classes::types
