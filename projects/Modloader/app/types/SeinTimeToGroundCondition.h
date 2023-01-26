#pragma once
#include <Modloader/app/structs/SeinTimeToGroundCondition.h>
#include <Modloader/app/structs/SeinTimeToGroundCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTimeToGroundCondition {
        inline app::SeinTimeToGroundCondition__Class** type_info() {
            static app::SeinTimeToGroundCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinTimeToGroundCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinTimeToGroundCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinTimeToGroundCondition__Class>(type_info(), "", "SeinTimeToGroundCondition");
        }
        inline app::SeinTimeToGroundCondition* create() {
            return il2cpp::create_object<app::SeinTimeToGroundCondition>(get_class());
        }
    } // namespace SeinTimeToGroundCondition
} // namespace app::classes::types
