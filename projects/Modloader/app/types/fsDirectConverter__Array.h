#pragma once
#include <Modloader/app/structs/fsDirectConverter__Array.h>
#include <Modloader/app/structs/fsDirectConverter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsDirectConverter__Array {
        inline app::fsDirectConverter__Array__Class** type_info() {
            static app::fsDirectConverter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::fsDirectConverter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::fsDirectConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::fsDirectConverter__Array__Class>(type_info(), "FullSerializer", "fsDirectConverter[]");
        }
        inline app::fsDirectConverter__Array* create() {
            return il2cpp::create_object<app::fsDirectConverter__Array>(get_class());
        }
    } // namespace fsDirectConverter__Array
} // namespace app::classes::types
