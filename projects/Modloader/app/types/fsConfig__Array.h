#pragma once
#include <Modloader/app/structs/fsConfig__Array.h>
#include <Modloader/app/structs/fsConfig__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsConfig__Array {
        inline app::fsConfig__Array__Class** type_info() {
            static app::fsConfig__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsConfig__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsConfig__Array__Class* get_class() {
            return il2cpp::get_class<app::fsConfig__Array__Class>(type_info(), "FullSerializer", "fsConfig[]");
        }
        inline app::fsConfig__Array* create() {
            return il2cpp::create_object<app::fsConfig__Array>(get_class());
        }
    } // namespace fsConfig__Array
} // namespace app::classes::types
