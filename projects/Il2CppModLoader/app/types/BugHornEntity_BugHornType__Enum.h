#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BugHornEntity_BugHornType__Enum {
        namespace {
            app::BugHornEntity_BugHornType__Enum__Class* type_info_ref = nullptr;
        }
        app::BugHornEntity_BugHornType__Enum__Class** type_info = &type_info_ref;
        inline app::BugHornEntity_BugHornType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BugHornEntity_BugHornType__Enum__Class>(type_info, "", "BugHornEntity", "BugHornType");
        }
        inline app::BugHornEntity_BugHornType__Enum* create() {
            return il2cpp::create_object<app::BugHornEntity_BugHornType__Enum>(get_class());
        }
    } // namespace BugHornEntity_BugHornType__Enum
} // namespace app::classes::types
