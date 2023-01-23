#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsSafeToExitCondition__Class.h>
#include <Modloader/app/structs/IsSafeToExitCondition.h>

namespace app::classes::types {
    namespace IsSafeToExitCondition {
        namespace {
            inline app::IsSafeToExitCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsSafeToExitCondition__Class** type_info = &type_info_ref;
        inline app::IsSafeToExitCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSafeToExitCondition__Class>(type_info, "", "IsSafeToExitCondition");
        }
        inline app::IsSafeToExitCondition* create() {
            return il2cpp::create_object<app::IsSafeToExitCondition>(get_class());
        }
    } // namespace IsSafeToExitCondition
} // namespace app::classes::types
