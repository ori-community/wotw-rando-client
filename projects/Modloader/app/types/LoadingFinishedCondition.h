#pragma once
#include <Modloader/app/structs/LoadingFinishedCondition.h>
#include <Modloader/app/structs/LoadingFinishedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadingFinishedCondition {
        inline app::LoadingFinishedCondition__Class** type_info() {
            static app::LoadingFinishedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadingFinishedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadingFinishedCondition__Class* get_class() {
            return il2cpp::get_class<app::LoadingFinishedCondition__Class>(type_info(), "", "LoadingFinishedCondition");
        }
        inline app::LoadingFinishedCondition* create() {
            return il2cpp::create_object<app::LoadingFinishedCondition>(get_class());
        }
    } // namespace LoadingFinishedCondition
} // namespace app::classes::types
