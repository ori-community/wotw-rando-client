#pragma once
#include <Modloader/app/structs/CC_FastVignette.h>
#include <Modloader/app/structs/CC_FastVignette__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_FastVignette {
        inline app::CC_FastVignette__Class** type_info() {
            static app::CC_FastVignette__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_FastVignette__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_FastVignette__Class* get_class() {
            return il2cpp::get_class<app::CC_FastVignette__Class>(type_info(), "", "CC_FastVignette");
        }
        inline app::CC_FastVignette* create() {
            return il2cpp::create_object<app::CC_FastVignette>(get_class());
        }
    } // namespace CC_FastVignette
} // namespace app::classes::types
