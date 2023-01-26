#pragma once
#include <Modloader/app/structs/CC_Base.h>
#include <Modloader/app/structs/CC_Base__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_Base {
        inline app::CC_Base__Class** type_info() {
            static app::CC_Base__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_Base__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_Base__Class* get_class() {
            return il2cpp::get_class<app::CC_Base__Class>(type_info(), "", "CC_Base");
        }
        inline app::CC_Base* create() {
            return il2cpp::create_object<app::CC_Base>(get_class());
        }
    } // namespace CC_Base
} // namespace app::classes::types
