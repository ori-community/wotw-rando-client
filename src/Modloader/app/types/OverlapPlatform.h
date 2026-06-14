#pragma once
#include <Modloader/app/structs/OverlapPlatform.h>
#include <Modloader/app/structs/OverlapPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverlapPlatform {
        inline app::OverlapPlatform__Class** type_info() {
            static app::OverlapPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OverlapPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OverlapPlatform__Class* get_class() {
            return il2cpp::get_class<app::OverlapPlatform__Class>(type_info(), "", "OverlapPlatform");
        }
        inline app::OverlapPlatform* create() {
            return il2cpp::create_object<app::OverlapPlatform>(get_class());
        }
    } // namespace OverlapPlatform
} // namespace app::classes::types
