#pragma once
#include <Modloader/app/structs/SeinOnGroundCondition.h>
#include <Modloader/app/structs/SeinOnGroundCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinOnGroundCondition {
        inline app::SeinOnGroundCondition__Class** type_info() {
            static app::SeinOnGroundCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinOnGroundCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinOnGroundCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinOnGroundCondition__Class>(type_info(), "", "SeinOnGroundCondition");
        }
        inline app::SeinOnGroundCondition* create() {
            return il2cpp::create_object<app::SeinOnGroundCondition>(get_class());
        }
    } // namespace SeinOnGroundCondition
} // namespace app::classes::types
