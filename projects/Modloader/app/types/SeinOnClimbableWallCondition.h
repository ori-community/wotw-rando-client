#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinOnClimbableWallCondition__Class.h>
#include <Modloader/app/structs/SeinOnClimbableWallCondition.h>

namespace app::classes::types {
    namespace SeinOnClimbableWallCondition {
        namespace {
            inline app::SeinOnClimbableWallCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinOnClimbableWallCondition__Class** type_info = &type_info_ref;
        inline app::SeinOnClimbableWallCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinOnClimbableWallCondition__Class>(type_info, "", "SeinOnClimbableWallCondition");
        }
        inline app::SeinOnClimbableWallCondition* create() {
            return il2cpp::create_object<app::SeinOnClimbableWallCondition>(get_class());
        }
    } // namespace SeinOnClimbableWallCondition
} // namespace app::classes::types
