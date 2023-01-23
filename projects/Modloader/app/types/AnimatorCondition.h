#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimatorCondition__Class.h>
#include <Modloader/app/structs/AnimatorCondition.h>

namespace app::classes::types {
    namespace AnimatorCondition {
        namespace {
            inline app::AnimatorCondition__Class* type_info_ref = nullptr;
        }
        inline app::AnimatorCondition__Class** type_info = &type_info_ref;
        inline app::AnimatorCondition__Class* get_class() {
            return il2cpp::get_class<app::AnimatorCondition__Class>(type_info, "", "AnimatorCondition");
        }
        inline app::AnimatorCondition* create() {
            return il2cpp::create_object<app::AnimatorCondition>(get_class());
        }
    } // namespace AnimatorCondition
} // namespace app::classes::types
