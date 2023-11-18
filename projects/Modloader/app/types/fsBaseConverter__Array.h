#pragma once
#include <Modloader/app/structs/fsBaseConverter__Array.h>
#include <Modloader/app/structs/fsBaseConverter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsBaseConverter__Array {
        inline app::fsBaseConverter__Array__Class** type_info() {
            static app::fsBaseConverter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsBaseConverter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsBaseConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::fsBaseConverter__Array__Class>(type_info(), "FullSerializer", "fsBaseConverter[]");
        }
        inline app::fsBaseConverter__Array* create() {
            return il2cpp::create_object<app::fsBaseConverter__Array>(get_class());
        }
    } // namespace fsBaseConverter__Array
} // namespace app::classes::types
