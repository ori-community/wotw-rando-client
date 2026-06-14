#pragma once
#include <Modloader/app/structs/PoolTransformPosition__Array.h>
#include <Modloader/app/structs/PoolTransformPosition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoolTransformPosition__Array {
        inline app::PoolTransformPosition__Array__Class** type_info() {
            static app::PoolTransformPosition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoolTransformPosition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoolTransformPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::PoolTransformPosition__Array__Class>(type_info(), "", "PoolTransformPosition[]");
        }
        inline app::PoolTransformPosition__Array* create() {
            return il2cpp::create_object<app::PoolTransformPosition__Array>(get_class());
        }
    } // namespace PoolTransformPosition__Array
} // namespace app::classes::types
