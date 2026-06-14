#pragma once
#include <Modloader/app/structs/FixedRotation.h>
#include <Modloader/app/structs/FixedRotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedRotation {
        inline app::FixedRotation__Class** type_info() {
            static app::FixedRotation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedRotation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedRotation__Class* get_class() {
            return il2cpp::get_class<app::FixedRotation__Class>(type_info(), "", "FixedRotation");
        }
        inline app::FixedRotation* create() {
            return il2cpp::create_object<app::FixedRotation>(get_class());
        }
    } // namespace FixedRotation
} // namespace app::classes::types
