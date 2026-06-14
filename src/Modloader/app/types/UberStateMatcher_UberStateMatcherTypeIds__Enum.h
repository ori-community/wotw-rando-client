#pragma once
#include <Modloader/app/structs/UberStateMatcher_UberStateMatcherTypeIds__Enum.h>
#include <Modloader/app/structs/UberStateMatcher_UberStateMatcherTypeIds__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateMatcher_UberStateMatcherTypeIds__Enum {
        inline app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class** type_info() {
            static app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class>(type_info(), "", "UberStateMatcher", "UberStateMatcherTypeIds");
        }
        inline app::UberStateMatcher_UberStateMatcherTypeIds__Enum* create() {
            return il2cpp::create_object<app::UberStateMatcher_UberStateMatcherTypeIds__Enum>(get_class());
        }
    } // namespace UberStateMatcher_UberStateMatcherTypeIds__Enum
} // namespace app::classes::types
