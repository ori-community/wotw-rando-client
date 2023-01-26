#pragma once
#include <Modloader/app/structs/RecorderFrame__Array.h>
#include <Modloader/app/structs/RecorderFrame__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderFrame__Array {
        inline app::RecorderFrame__Array__Class** type_info() {
            static app::RecorderFrame__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderFrame__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::RecorderFrame__Array__Class>(type_info(), "", "RecorderFrame[]");
        }
        inline app::RecorderFrame__Array* create() {
            return il2cpp::create_object<app::RecorderFrame__Array>(get_class());
        }
    } // namespace RecorderFrame__Array
} // namespace app::classes::types
