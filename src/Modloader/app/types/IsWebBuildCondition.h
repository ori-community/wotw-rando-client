#pragma once
#include <Modloader/app/structs/IsWebBuildCondition.h>
#include <Modloader/app/structs/IsWebBuildCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsWebBuildCondition {
        inline app::IsWebBuildCondition__Class** type_info() {
            static app::IsWebBuildCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsWebBuildCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsWebBuildCondition__Class* get_class() {
            return il2cpp::get_class<app::IsWebBuildCondition__Class>(type_info(), "", "IsWebBuildCondition");
        }
        inline app::IsWebBuildCondition* create() {
            return il2cpp::create_object<app::IsWebBuildCondition>(get_class());
        }
    } // namespace IsWebBuildCondition
} // namespace app::classes::types
