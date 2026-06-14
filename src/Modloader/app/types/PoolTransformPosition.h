#pragma once
#include <Modloader/app/structs/PoolTransformPosition.h>
#include <Modloader/app/structs/PoolTransformPosition__Array.h>
#include <Modloader/app/structs/PoolTransformPosition__Boxed.h>
#include <Modloader/app/structs/PoolTransformPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoolTransformPosition {
        inline app::PoolTransformPosition__Class** type_info() {
            static app::PoolTransformPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoolTransformPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoolTransformPosition__Class* get_class() {
            return il2cpp::get_class<app::PoolTransformPosition__Class>(type_info(), "", "PoolTransformPosition");
        }
        inline app::PoolTransformPosition* create() {
            return il2cpp::create_object<app::PoolTransformPosition>(get_class());
        }
        inline app::PoolTransformPosition__Boxed* box(app::PoolTransformPosition value) {
            return il2cpp::box_value<app::PoolTransformPosition__Boxed>(get_class(), value);
        }
        inline app::PoolTransformPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::PoolTransformPosition__Array>(get_class(), size);
        }
        inline app::PoolTransformPosition__Array* create_array(const std::vector<app::PoolTransformPosition>& items) {
            return il2cpp::array_new<app::PoolTransformPosition__Array>(get_class(), items);
        }
    } // namespace PoolTransformPosition
} // namespace app::classes::types
