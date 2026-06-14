#pragma once
#include <Modloader/app/structs/SeinAliveCondition.h>
#include <Modloader/app/structs/SeinAliveCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAliveCondition {
        inline app::SeinAliveCondition__Class** type_info() {
            static app::SeinAliveCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAliveCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAliveCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAliveCondition__Class>(type_info(), "", "SeinAliveCondition");
        }
        inline app::SeinAliveCondition* create() {
            return il2cpp::create_object<app::SeinAliveCondition>(get_class());
        }
    } // namespace SeinAliveCondition
} // namespace app::classes::types
