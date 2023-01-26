#pragma once
#include <Modloader/app/structs/fsData__Array.h>
#include <Modloader/app/structs/fsData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsData__Array {
        inline app::fsData__Array__Class** type_info() {
            static app::fsData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsData__Array__Class* get_class() {
            return il2cpp::get_class<app::fsData__Array__Class>(type_info(), "FullSerializer", "fsData[]");
        }
        inline app::fsData__Array* create() {
            return il2cpp::create_object<app::fsData__Array>(get_class());
        }
    } // namespace fsData__Array
} // namespace app::classes::types
