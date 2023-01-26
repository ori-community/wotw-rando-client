#pragma once
#include <Modloader/app/structs/CC_RadialBlur.h>
#include <Modloader/app/structs/CC_RadialBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_RadialBlur {
        inline app::CC_RadialBlur__Class** type_info() {
            static app::CC_RadialBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_RadialBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_RadialBlur__Class* get_class() {
            return il2cpp::get_class<app::CC_RadialBlur__Class>(type_info(), "", "CC_RadialBlur");
        }
        inline app::CC_RadialBlur* create() {
            return il2cpp::create_object<app::CC_RadialBlur>(get_class());
        }
    } // namespace CC_RadialBlur
} // namespace app::classes::types
