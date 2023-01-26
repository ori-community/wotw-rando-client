#pragma once
#include <Modloader/app/structs/BugHornAgrroSelector.h>
#include <Modloader/app/structs/BugHornAgrroSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugHornAgrroSelector {
        inline app::BugHornAgrroSelector__Class** type_info() {
            static app::BugHornAgrroSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BugHornAgrroSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BugHornAgrroSelector__Class* get_class() {
            return il2cpp::get_class<app::BugHornAgrroSelector__Class>(type_info(), "", "BugHornAgrroSelector");
        }
        inline app::BugHornAgrroSelector* create() {
            return il2cpp::create_object<app::BugHornAgrroSelector>(get_class());
        }
    } // namespace BugHornAgrroSelector
} // namespace app::classes::types
