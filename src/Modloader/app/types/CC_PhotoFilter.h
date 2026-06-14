#pragma once
#include <Modloader/app/structs/CC_PhotoFilter.h>
#include <Modloader/app/structs/CC_PhotoFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CC_PhotoFilter {
        inline app::CC_PhotoFilter__Class** type_info() {
            static app::CC_PhotoFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CC_PhotoFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CC_PhotoFilter__Class* get_class() {
            return il2cpp::get_class<app::CC_PhotoFilter__Class>(type_info(), "", "CC_PhotoFilter");
        }
        inline app::CC_PhotoFilter* create() {
            return il2cpp::create_object<app::CC_PhotoFilter>(get_class());
        }
    } // namespace CC_PhotoFilter
} // namespace app::classes::types
