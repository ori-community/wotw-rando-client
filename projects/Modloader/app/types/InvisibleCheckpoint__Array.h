#pragma once
#include <Modloader/app/structs/InvisibleCheckpoint__Array.h>
#include <Modloader/app/structs/InvisibleCheckpoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvisibleCheckpoint__Array {
        inline app::InvisibleCheckpoint__Array__Class** type_info() {
            static app::InvisibleCheckpoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InvisibleCheckpoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InvisibleCheckpoint__Array__Class* get_class() {
            return il2cpp::get_class<app::InvisibleCheckpoint__Array__Class>(type_info(), "", "InvisibleCheckpoint[]");
        }
        inline app::InvisibleCheckpoint__Array* create() {
            return il2cpp::create_object<app::InvisibleCheckpoint__Array>(get_class());
        }
    } // namespace InvisibleCheckpoint__Array
} // namespace app::classes::types
