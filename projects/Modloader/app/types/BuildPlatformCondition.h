#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BuildPlatformCondition__Class.h>
#include <Modloader/app/structs/BuildPlatformCondition.h>

namespace app::classes::types {
    namespace BuildPlatformCondition {
        namespace {
            inline app::BuildPlatformCondition__Class* type_info_ref = nullptr;
        }
        inline app::BuildPlatformCondition__Class** type_info = &type_info_ref;
        inline app::BuildPlatformCondition__Class* get_class() {
            return il2cpp::get_class<app::BuildPlatformCondition__Class>(type_info, "", "BuildPlatformCondition");
        }
        inline app::BuildPlatformCondition* create() {
            return il2cpp::create_object<app::BuildPlatformCondition>(get_class());
        }
    } // namespace BuildPlatformCondition
} // namespace app::classes::types
