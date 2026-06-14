#pragma once
#include <Modloader/app/structs/ConstraintsMetaData__Array.h>
#include <Modloader/app/structs/ConstraintsMetaData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintsMetaData__Array {
        inline app::ConstraintsMetaData__Array__Class** type_info() {
            static app::ConstraintsMetaData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConstraintsMetaData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConstraintsMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::ConstraintsMetaData__Array__Class>(type_info(), "Moon.Timeline", "ConstraintsMetaData[]");
        }
        inline app::ConstraintsMetaData__Array* create() {
            return il2cpp::create_object<app::ConstraintsMetaData__Array>(get_class());
        }
    } // namespace ConstraintsMetaData__Array
} // namespace app::classes::types
