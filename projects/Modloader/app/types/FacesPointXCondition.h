#pragma once
#include <Modloader/app/structs/FacesPointXCondition.h>
#include <Modloader/app/structs/FacesPointXCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacesPointXCondition {
        inline app::FacesPointXCondition__Class** type_info() {
            static app::FacesPointXCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FacesPointXCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FacesPointXCondition__Class* get_class() {
            return il2cpp::get_class<app::FacesPointXCondition__Class>(type_info(), "Moon.BehaviourSystem", "FacesPointXCondition");
        }
        inline app::FacesPointXCondition* create() {
            return il2cpp::create_object<app::FacesPointXCondition>(get_class());
        }
    } // namespace FacesPointXCondition
} // namespace app::classes::types
