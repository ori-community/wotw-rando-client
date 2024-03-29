#pragma once
#include <Modloader/app/structs/LinearPathVariedSpeed_PathPoint.h>
#include <Modloader/app/structs/LinearPathVariedSpeed_PathPoint__Array.h>
#include <Modloader/app/structs/LinearPathVariedSpeed_PathPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinearPathVariedSpeed_PathPoint {
        inline app::LinearPathVariedSpeed_PathPoint__Class** type_info() {
            static app::LinearPathVariedSpeed_PathPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LinearPathVariedSpeed_PathPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LinearPathVariedSpeed_PathPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::LinearPathVariedSpeed_PathPoint__Class>(type_info(), "", "LinearPathVariedSpeed", "PathPoint");
        }
        inline app::LinearPathVariedSpeed_PathPoint* create() {
            return il2cpp::create_object<app::LinearPathVariedSpeed_PathPoint>(get_class());
        }
        inline app::LinearPathVariedSpeed_PathPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::LinearPathVariedSpeed_PathPoint__Array>(get_class(), size);
        }
        inline app::LinearPathVariedSpeed_PathPoint__Array* create_array(const std::vector<app::LinearPathVariedSpeed_PathPoint*>& items) {
            return il2cpp::array_new<app::LinearPathVariedSpeed_PathPoint__Array>(get_class(), items);
        }
    } // namespace LinearPathVariedSpeed_PathPoint
} // namespace app::classes::types
