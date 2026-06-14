#pragma once
#include <Modloader/app/structs/IsPressTourBuildCondition.h>
#include <Modloader/app/structs/IsPressTourBuildCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsPressTourBuildCondition {
        inline app::IsPressTourBuildCondition__Class** type_info() {
            static app::IsPressTourBuildCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsPressTourBuildCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsPressTourBuildCondition__Class* get_class() {
            return il2cpp::get_class<app::IsPressTourBuildCondition__Class>(type_info(), "", "IsPressTourBuildCondition");
        }
        inline app::IsPressTourBuildCondition* create() {
            return il2cpp::create_object<app::IsPressTourBuildCondition>(get_class());
        }
    } // namespace IsPressTourBuildCondition
} // namespace app::classes::types
