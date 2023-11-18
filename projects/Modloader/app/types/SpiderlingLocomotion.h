#pragma once
#include <Modloader/app/structs/SpiderlingLocomotion.h>
#include <Modloader/app/structs/SpiderlingLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingLocomotion {
        inline app::SpiderlingLocomotion__Class** type_info() {
            static app::SpiderlingLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingLocomotion__Class>(type_info(), "", "SpiderlingLocomotion");
        }
        inline app::SpiderlingLocomotion* create() {
            return il2cpp::create_object<app::SpiderlingLocomotion>(get_class());
        }
    } // namespace SpiderlingLocomotion
} // namespace app::classes::types
