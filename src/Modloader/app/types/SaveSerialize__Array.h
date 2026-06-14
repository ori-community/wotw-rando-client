#pragma once
#include <Modloader/app/structs/SaveSerialize__Array.h>
#include <Modloader/app/structs/SaveSerialize__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSerialize__Array {
        inline app::SaveSerialize__Array__Class** type_info() {
            static app::SaveSerialize__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSerialize__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSerialize__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSerialize__Array__Class>(type_info(), "", "SaveSerialize[]");
        }
        inline app::SaveSerialize__Array* create() {
            return il2cpp::create_object<app::SaveSerialize__Array>(get_class());
        }
    } // namespace SaveSerialize__Array
} // namespace app::classes::types
