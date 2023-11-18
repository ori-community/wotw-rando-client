#pragma once
#include <Modloader/app/structs/RecordableObject__Array.h>
#include <Modloader/app/structs/RecordableObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordableObject__Array {
        inline app::RecordableObject__Array__Class** type_info() {
            static app::RecordableObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordableObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordableObject__Array__Class* get_class() {
            return il2cpp::get_class<app::RecordableObject__Array__Class>(type_info(), "", "RecordableObject[]");
        }
        inline app::RecordableObject__Array* create() {
            return il2cpp::create_object<app::RecordableObject__Array>(get_class());
        }
    } // namespace RecordableObject__Array
} // namespace app::classes::types
