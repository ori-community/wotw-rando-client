#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointSegment {
        namespace {
            app::PointSegment__Class* type_info_ref = nullptr;
        }
        app::PointSegment__Class** type_info = &type_info_ref;
        inline app::PointSegment__Class* get_class() {
            return il2cpp::get_class<app::PointSegment__Class>(type_info, "", "PointSegment");
        }
        inline app::PointSegment* create() {
            return il2cpp::create_object<app::PointSegment>(get_class());
        }
    } // namespace PointSegment
} // namespace app::classes::types
