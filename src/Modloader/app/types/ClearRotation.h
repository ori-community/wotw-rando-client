#pragma once
#include <Modloader/app/structs/ClearRotation.h>
#include <Modloader/app/structs/ClearRotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearRotation {
        inline app::ClearRotation__Class** type_info() {
            static app::ClearRotation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClearRotation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClearRotation__Class* get_class() {
            return il2cpp::get_class<app::ClearRotation__Class>(type_info(), "", "ClearRotation");
        }
        inline app::ClearRotation* create() {
            return il2cpp::create_object<app::ClearRotation>(get_class());
        }
    } // namespace ClearRotation
} // namespace app::classes::types
