#pragma once
#include <Modloader/app/structs/LineRenderer__Array.h>
#include <Modloader/app/structs/LineRenderer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineRenderer__Array {
        inline app::LineRenderer__Array__Class** type_info() {
            static app::LineRenderer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LineRenderer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LineRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::LineRenderer__Array__Class>(type_info(), "UnityEngine", "LineRenderer[]");
        }
        inline app::LineRenderer__Array* create() {
            return il2cpp::create_object<app::LineRenderer__Array>(get_class());
        }
    } // namespace LineRenderer__Array
} // namespace app::classes::types
