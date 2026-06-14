#pragma once
#include <Modloader/app/structs/CC_Grayscale.h>
#include <Modloader/app/structs/CC_Grayscale__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Grayscale {
        inline app::CC_Grayscale__Class** type_info() {
            static app::CC_Grayscale__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Grayscale__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Grayscale__Class* get_class() {
            return il2cpp::get_class<app::CC_Grayscale__Class>(type_info(), "", "CC_Grayscale");
        }
        inline app::CC_Grayscale* create() {
            return il2cpp::create_object<app::CC_Grayscale>(get_class());
        }
    } // namespace CC_Grayscale
} // namespace app::classes::types
