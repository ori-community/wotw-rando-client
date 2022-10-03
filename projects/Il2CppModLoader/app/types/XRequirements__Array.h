#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XRequirements__Array {
        namespace {
            app::XRequirements__Array__Class* type_info_ref = nullptr;
        }
        app::XRequirements__Array__Class** type_info = &type_info_ref;
        inline app::XRequirements__Array__Class* get_class() {
            return il2cpp::get_class<app::XRequirements__Array__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XRequirements[]");
        }
        inline app::XRequirements__Array* create() {
            return il2cpp::create_object<app::XRequirements__Array>(get_class());
        }
    } // namespace XRequirements__Array
} // namespace app::classes::types
