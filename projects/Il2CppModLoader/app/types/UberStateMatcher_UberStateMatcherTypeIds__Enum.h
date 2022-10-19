#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateMatcher_UberStateMatcherTypeIds__Enum {
        namespace {
            inline app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class** type_info = &type_info_ref;
        inline app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateMatcher_UberStateMatcherTypeIds__Enum__Class>(type_info, "", "UberStateMatcher", "UberStateMatcherTypeIds");
        }
        inline app::UberStateMatcher_UberStateMatcherTypeIds__Enum* create() {
            return il2cpp::create_object<app::UberStateMatcher_UberStateMatcherTypeIds__Enum>(get_class());
        }
    } // namespace UberStateMatcher_UberStateMatcherTypeIds__Enum
} // namespace app::classes::types
