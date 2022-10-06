#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoolTransformPosition {
        namespace {
            app::PoolTransformPosition__Class* type_info_ref = nullptr;
        }
        app::PoolTransformPosition__Class** type_info = &type_info_ref;
        inline app::PoolTransformPosition__Class* get_class() {
            return il2cpp::get_class<app::PoolTransformPosition__Class>(type_info, "", "PoolTransformPosition");
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
        inline app::PoolTransformPosition__Array* create_array(const std::vector<app::PoolTransformPosition__Boxed>& items) {
            return il2cpp::array_new<app::PoolTransformPosition__Array>(get_class(), items);
        }
    } // namespace PoolTransformPosition
} // namespace app::classes::types
