#pragma once
#include <Modloader/app/structs/LinearPathVariedSpeed_PathPoint__Array.h>
#include <Modloader/app/structs/LinearPathVariedSpeed_PathPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinearPathVariedSpeed_PathPoint__Array {
        inline app::LinearPathVariedSpeed_PathPoint__Array__Class** type_info() {
            static app::LinearPathVariedSpeed_PathPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LinearPathVariedSpeed_PathPoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LinearPathVariedSpeed_PathPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::LinearPathVariedSpeed_PathPoint__Array__Class>(type_info(), "", "LinearPathVariedSpeed+PathPoint[]");
        }
        inline app::LinearPathVariedSpeed_PathPoint__Array* create() {
            return il2cpp::create_object<app::LinearPathVariedSpeed_PathPoint__Array>(get_class());
        }
    } // namespace LinearPathVariedSpeed_PathPoint__Array
} // namespace app::classes::types
