#pragma once
#include <Modloader/app/structs/ScalePlatform.h>
#include <Modloader/app/structs/ScalePlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScalePlatform {
        inline app::ScalePlatform__Class** type_info() {
            static app::ScalePlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScalePlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScalePlatform__Class* get_class() {
            return il2cpp::get_class<app::ScalePlatform__Class>(type_info(), "Moon", "ScalePlatform");
        }
        inline app::ScalePlatform* create() {
            return il2cpp::create_object<app::ScalePlatform>(get_class());
        }
    } // namespace ScalePlatform
} // namespace app::classes::types
