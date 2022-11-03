#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FacesPointXCondition {
        namespace {
            inline app::FacesPointXCondition__Class* type_info_ref = nullptr;
        }
        inline app::FacesPointXCondition__Class** type_info = &type_info_ref;
        inline app::FacesPointXCondition__Class* get_class() {
            return il2cpp::get_class<app::FacesPointXCondition__Class>(type_info, "Moon.BehaviourSystem", "FacesPointXCondition");
        }
        inline app::FacesPointXCondition* create() {
            return il2cpp::create_object<app::FacesPointXCondition>(get_class());
        }
    } // namespace FacesPointXCondition
} // namespace app::classes::types
