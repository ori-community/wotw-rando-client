#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildPlatformCondition {
        namespace {
            app::BuildPlatformCondition__Class* type_info_ref = nullptr;
        }
        app::BuildPlatformCondition__Class** type_info = &type_info_ref;
        inline app::BuildPlatformCondition__Class* get_class() {
            return il2cpp::get_class<app::BuildPlatformCondition__Class>(type_info, "", "BuildPlatformCondition");
        }
        inline app::BuildPlatformCondition* create() {
            return il2cpp::create_object<app::BuildPlatformCondition>(get_class());
        }
    } // namespace BuildPlatformCondition
} // namespace app::classes::types
