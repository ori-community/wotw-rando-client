#pragma once
#include <Modloader/app/structs/DynamicUtils.h>
#include <Modloader/app/structs/DynamicUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicUtils {
        inline app::DynamicUtils__Class** type_info() {
            static app::DynamicUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicUtils__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicUtils__Class* get_class() {
            return il2cpp::get_class<app::DynamicUtils__Class>(type_info(), "Newtonsoft.Json.Utilities", "DynamicUtils");
        }
        inline app::DynamicUtils* create() {
            return il2cpp::create_object<app::DynamicUtils>(get_class());
        }
    } // namespace DynamicUtils
} // namespace app::classes::types
