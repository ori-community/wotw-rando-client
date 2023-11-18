#pragma once
#include <Modloader/app/structs/PerspectiveRotationAdjustment.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment__Array.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerspectiveRotationAdjustment {
        inline app::PerspectiveRotationAdjustment__Class** type_info() {
            static app::PerspectiveRotationAdjustment__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerspectiveRotationAdjustment__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerspectiveRotationAdjustment__Class* get_class() {
            return il2cpp::get_class<app::PerspectiveRotationAdjustment__Class>(type_info(), "", "PerspectiveRotationAdjustment");
        }
        inline app::PerspectiveRotationAdjustment* create() {
            return il2cpp::create_object<app::PerspectiveRotationAdjustment>(get_class());
        }
        inline app::PerspectiveRotationAdjustment__Array* create_array(int size) {
            return il2cpp::array_new<app::PerspectiveRotationAdjustment__Array>(get_class(), size);
        }
        inline app::PerspectiveRotationAdjustment__Array* create_array(const std::vector<app::PerspectiveRotationAdjustment*>& items) {
            return il2cpp::array_new<app::PerspectiveRotationAdjustment__Array>(get_class(), items);
        }
    } // namespace PerspectiveRotationAdjustment
} // namespace app::classes::types
