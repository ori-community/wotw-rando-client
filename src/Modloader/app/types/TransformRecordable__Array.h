#pragma once
#include <Modloader/app/structs/TransformRecordable__Array.h>
#include <Modloader/app/structs/TransformRecordable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformRecordable__Array {
        inline app::TransformRecordable__Array__Class** type_info() {
            static app::TransformRecordable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformRecordable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformRecordable__Array__Class* get_class() {
            return il2cpp::get_class<app::TransformRecordable__Array__Class>(type_info(), "", "TransformRecordable[]");
        }
        inline app::TransformRecordable__Array* create() {
            return il2cpp::create_object<app::TransformRecordable__Array>(get_class());
        }
    } // namespace TransformRecordable__Array
} // namespace app::classes::types
