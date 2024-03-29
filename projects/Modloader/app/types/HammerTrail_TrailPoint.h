#pragma once
#include <Modloader/app/structs/HammerTrail_TrailPoint.h>
#include <Modloader/app/structs/HammerTrail_TrailPoint__Array.h>
#include <Modloader/app/structs/HammerTrail_TrailPoint__Boxed.h>
#include <Modloader/app/structs/HammerTrail_TrailPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerTrail_TrailPoint {
        inline app::HammerTrail_TrailPoint__Class** type_info() {
            static app::HammerTrail_TrailPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HammerTrail_TrailPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HammerTrail_TrailPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::HammerTrail_TrailPoint__Class>(type_info(), "", "HammerTrail", "TrailPoint");
        }
        inline app::HammerTrail_TrailPoint* create() {
            return il2cpp::create_object<app::HammerTrail_TrailPoint>(get_class());
        }
        inline app::HammerTrail_TrailPoint__Boxed* box(app::HammerTrail_TrailPoint value) {
            return il2cpp::box_value<app::HammerTrail_TrailPoint__Boxed>(get_class(), value);
        }
        inline app::HammerTrail_TrailPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::HammerTrail_TrailPoint__Array>(get_class(), size);
        }
        inline app::HammerTrail_TrailPoint__Array* create_array(const std::vector<app::HammerTrail_TrailPoint>& items) {
            return il2cpp::array_new<app::HammerTrail_TrailPoint__Array>(get_class(), items);
        }
    } // namespace HammerTrail_TrailPoint
} // namespace app::classes::types
