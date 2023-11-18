#pragma once
#include <Modloader/app/structs/ComCompatibleVersionAttribute.h>
#include <Modloader/app/structs/ComCompatibleVersionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComCompatibleVersionAttribute {
        inline app::ComCompatibleVersionAttribute__Class** type_info() {
            static app::ComCompatibleVersionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComCompatibleVersionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComCompatibleVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComCompatibleVersionAttribute__Class>(type_info(), "System.Runtime.InteropServices", "ComCompatibleVersionAttribute");
        }
        inline app::ComCompatibleVersionAttribute* create() {
            return il2cpp::create_object<app::ComCompatibleVersionAttribute>(get_class());
        }
    } // namespace ComCompatibleVersionAttribute
} // namespace app::classes::types
