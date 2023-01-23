#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CanChangeDifficultyCondition__Class.h>
#include <Modloader/app/structs/CanChangeDifficultyCondition.h>

namespace app::classes::types {
    namespace CanChangeDifficultyCondition {
        namespace {
            inline app::CanChangeDifficultyCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanChangeDifficultyCondition__Class** type_info = &type_info_ref;
        inline app::CanChangeDifficultyCondition__Class* get_class() {
            return il2cpp::get_class<app::CanChangeDifficultyCondition__Class>(type_info, "", "CanChangeDifficultyCondition");
        }
        inline app::CanChangeDifficultyCondition* create() {
            return il2cpp::create_object<app::CanChangeDifficultyCondition>(get_class());
        }
    } // namespace CanChangeDifficultyCondition
} // namespace app::classes::types
