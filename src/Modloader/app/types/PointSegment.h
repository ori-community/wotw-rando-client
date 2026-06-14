#pragma once
#include <Modloader/app/structs/PointSegment.h>
#include <Modloader/app/structs/PointSegment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointSegment {
        inline app::PointSegment__Class** type_info() {
            static app::PointSegment__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointSegment__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointSegment__Class* get_class() {
            return il2cpp::get_class<app::PointSegment__Class>(type_info(), "", "PointSegment");
        }
        inline app::PointSegment* create() {
            return il2cpp::create_object<app::PointSegment>(get_class());
        }
    } // namespace PointSegment
} // namespace app::classes::types
