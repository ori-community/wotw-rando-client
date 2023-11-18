#pragma once
#include <Modloader/app/structs/CC_Posterize.h>
#include <Modloader/app/structs/CC_Posterize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Posterize {
        inline app::CC_Posterize__Class** type_info() {
            static app::CC_Posterize__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Posterize__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Posterize__Class* get_class() {
            return il2cpp::get_class<app::CC_Posterize__Class>(type_info(), "", "CC_Posterize");
        }
        inline app::CC_Posterize* create() {
            return il2cpp::create_object<app::CC_Posterize>(get_class());
        }
    } // namespace CC_Posterize
} // namespace app::classes::types
