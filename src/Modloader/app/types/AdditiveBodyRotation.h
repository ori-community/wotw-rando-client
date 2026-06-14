#pragma once
#include <Modloader/app/structs/AdditiveBodyRotation.h>
#include <Modloader/app/structs/AdditiveBodyRotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AdditiveBodyRotation {
        inline app::AdditiveBodyRotation__Class** type_info() {
            static app::AdditiveBodyRotation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AdditiveBodyRotation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AdditiveBodyRotation__Class* get_class() {
            return il2cpp::get_class<app::AdditiveBodyRotation__Class>(type_info(), "Moon", "AdditiveBodyRotation");
        }
        inline app::AdditiveBodyRotation* create() {
            return il2cpp::create_object<app::AdditiveBodyRotation>(get_class());
        }
    } // namespace AdditiveBodyRotation
} // namespace app::classes::types
