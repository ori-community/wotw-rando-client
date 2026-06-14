#pragma once
#include <Modloader/app/structs/ConstraintConverter.h>
#include <Modloader/app/structs/ConstraintConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintConverter {
        inline app::ConstraintConverter__Class** type_info() {
            static app::ConstraintConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstraintConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstraintConverter__Class* get_class() {
            return il2cpp::get_class<app::ConstraintConverter__Class>(type_info(), "System.Data", "ConstraintConverter");
        }
        inline app::ConstraintConverter* create() {
            return il2cpp::create_object<app::ConstraintConverter>(get_class());
        }
    } // namespace ConstraintConverter
} // namespace app::classes::types
