#pragma once
#include <Modloader/app/structs/BabyWorm.h>
#include <Modloader/app/structs/BabyWorm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyWorm {
        inline app::BabyWorm__Class** type_info() {
            static app::BabyWorm__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabyWorm__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabyWorm__Class* get_class() {
            return il2cpp::get_class<app::BabyWorm__Class>(type_info(), "", "BabyWorm");
        }
        inline app::BabyWorm* create() {
            return il2cpp::create_object<app::BabyWorm>(get_class());
        }
    } // namespace BabyWorm
} // namespace app::classes::types
