#pragma once
#include <Modloader/app/structs/CartSparkEffect.h>
#include <Modloader/app/structs/CartSparkEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartSparkEffect {
        inline app::CartSparkEffect__Class** type_info() {
            static app::CartSparkEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartSparkEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartSparkEffect__Class* get_class() {
            return il2cpp::get_class<app::CartSparkEffect__Class>(type_info(), "", "CartSparkEffect");
        }
        inline app::CartSparkEffect* create() {
            return il2cpp::create_object<app::CartSparkEffect>(get_class());
        }
    } // namespace CartSparkEffect
} // namespace app::classes::types
