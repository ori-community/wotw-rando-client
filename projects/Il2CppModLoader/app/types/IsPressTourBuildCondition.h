#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsPressTourBuildCondition {
        namespace {
            app::IsPressTourBuildCondition__Class* type_info_ref = nullptr;
        }
        app::IsPressTourBuildCondition__Class** type_info = &type_info_ref;
        inline app::IsPressTourBuildCondition__Class* get_class() {
            return il2cpp::get_class<app::IsPressTourBuildCondition__Class>(type_info, "", "IsPressTourBuildCondition");
        }
        inline app::IsPressTourBuildCondition* create() {
            return il2cpp::create_object<app::IsPressTourBuildCondition>(get_class());
        }
    } // namespace IsPressTourBuildCondition
} // namespace app::classes::types
