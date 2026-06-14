#pragma once
#include <Modloader/app/structs/CC_Pixelate.h>
#include <Modloader/app/structs/CC_Pixelate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Pixelate {
        inline app::CC_Pixelate__Class** type_info() {
            static app::CC_Pixelate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Pixelate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Pixelate__Class* get_class() {
            return il2cpp::get_class<app::CC_Pixelate__Class>(type_info(), "", "CC_Pixelate");
        }
        inline app::CC_Pixelate* create() {
            return il2cpp::create_object<app::CC_Pixelate>(get_class());
        }
    } // namespace CC_Pixelate
} // namespace app::classes::types
