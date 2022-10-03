#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinearPathVariedSpeed_PathPoint {
        namespace {
            app::LinearPathVariedSpeed_PathPoint__Class* type_info_ref = nullptr;
        }
        app::LinearPathVariedSpeed_PathPoint__Class** type_info = &type_info_ref;
        inline app::LinearPathVariedSpeed_PathPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::LinearPathVariedSpeed_PathPoint__Class>(type_info, "", "LinearPathVariedSpeed", "PathPoint");
        }
        inline app::LinearPathVariedSpeed_PathPoint* create() {
            return il2cpp::create_object<app::LinearPathVariedSpeed_PathPoint>(get_class());
        }
        inline app::LinearPathVariedSpeed_PathPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::LinearPathVariedSpeed_PathPoint__Array>(get_class(), size);
        }
    } // namespace LinearPathVariedSpeed_PathPoint
} // namespace app::classes::types
