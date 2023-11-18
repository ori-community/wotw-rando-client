#pragma once
#include <Modloader/app/structs/GenericUberStateCondition.h>
#include <Modloader/app/structs/GenericUberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericUberStateCondition {
        inline app::GenericUberStateCondition__Class** type_info() {
            static app::GenericUberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericUberStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::GenericUberStateCondition__Class>(type_info(), "", "GenericUberStateCondition");
        }
        inline app::GenericUberStateCondition* create() {
            return il2cpp::create_object<app::GenericUberStateCondition>(get_class());
        }
    } // namespace GenericUberStateCondition
} // namespace app::classes::types
