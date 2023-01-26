#pragma once
#include <Modloader/app/structs/BuildPlatformCondition.h>
#include <Modloader/app/structs/BuildPlatformCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuildPlatformCondition {
        inline app::BuildPlatformCondition__Class** type_info() {
            static app::BuildPlatformCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuildPlatformCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuildPlatformCondition__Class* get_class() {
            return il2cpp::get_class<app::BuildPlatformCondition__Class>(type_info(), "", "BuildPlatformCondition");
        }
        inline app::BuildPlatformCondition* create() {
            return il2cpp::create_object<app::BuildPlatformCondition>(get_class());
        }
    } // namespace BuildPlatformCondition
} // namespace app::classes::types
