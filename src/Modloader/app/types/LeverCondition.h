#pragma once
#include <Modloader/app/structs/LeverCondition.h>
#include <Modloader/app/structs/LeverCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverCondition {
        inline app::LeverCondition__Class** type_info() {
            static app::LeverCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeverCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeverCondition__Class* get_class() {
            return il2cpp::get_class<app::LeverCondition__Class>(type_info(), "", "LeverCondition");
        }
        inline app::LeverCondition* create() {
            return il2cpp::create_object<app::LeverCondition>(get_class());
        }
    } // namespace LeverCondition
} // namespace app::classes::types
